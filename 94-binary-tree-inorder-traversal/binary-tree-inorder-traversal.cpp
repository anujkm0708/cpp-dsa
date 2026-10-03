class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;

        if (root == NULL)
            return ans;

        inorder(root, ans);

        return ans;
    }

    void inorder(TreeNode* root, vector<int>& ans) {
        if (root == NULL)
            return;

        // Left
        inorder(root->left, ans);

        // Root
        ans.push_back(root->val);

        // Right
        inorder(root->right, ans);
    }
};