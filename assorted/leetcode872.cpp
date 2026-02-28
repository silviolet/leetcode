/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1, tree2;
        helper(root1, tree1);
        helper(root2, tree2);
        return tree1 == tree2;
    }
    void helper(TreeNode* root, vector<int>& res) {
        if (!root) return;
        if (!root->left && !root->right) res.push_back(root->val);
        else helper(root->left, res), helper(root->right, res);
    }
};