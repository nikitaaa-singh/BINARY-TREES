class Solution {
public:
    int maxPath = INT_MIN;

    int dfs(TreeNode* root) {
        if (!root) return 0;
        int left = max(0, dfs(root->left));
        int right = max(0, dfs(root->right));

        int currentPath = root->val + left + right;
        maxPath = max(maxPath, currentPath);
        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maxPath;
    }
};
  
