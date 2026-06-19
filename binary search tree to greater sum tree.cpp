class Solution {
public:
    int sum = 0;

    void traverse(TreeNode* root) {
        if (!root) return;

        traverse(root->right);

        sum += root->val;
        root->val = sum;

        traverse(root->left);
    }

    TreeNode* bstToGst(TreeNode* root) {
        traverse(root);
        return root;
    }
};
