class Solution {
public:
    bool isMirror(TreeNode* leftNode,
                  TreeNode* rightNode) {

        if (leftNode == NULL && rightNode == NULL)
            return true;

        if (leftNode == NULL || rightNode == NULL)
            return false;

        if (leftNode->val != rightNode->val)
            return false;

        return isMirror(leftNode->left, rightNode->right) &&
               isMirror(leftNode->right, rightNode->left);
    }

    bool isSymmetric(TreeNode* root) {

        return isMirror(root->left, root->right);
    }
};
