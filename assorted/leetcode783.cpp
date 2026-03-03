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
    int res{-1};
public:
    int minDiffInBST(TreeNode* root) {
        int val {-1};
        dfs(root, val);
        return res;
    }
    void dfs(TreeNode* root, int& prev) {
        if (!root) return;
        dfs(root->left, prev);
        if (prev != -1) {
            if (res < 0) res = root->val - prev;
            else res = min(res, root->val - prev);
        }
        prev = root->val;
        dfs(root->right, prev);
    }
};