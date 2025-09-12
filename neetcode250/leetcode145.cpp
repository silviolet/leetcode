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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        dfs(res, root);
        return res;
    }
    void dfs(vector<int>& res, TreeNode* curr){
        if (!curr) return;
        dfs(res, curr->left);
        dfs(res, curr->right);
        res.push_back(curr->val);
    }
};