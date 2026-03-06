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
    bool prev{false};
    int preval{0};
    bool res{true};
public:
    bool isValidBST(TreeNode* root) {
        dfs(root);
        return res;
    }
    void dfs(TreeNode* cur) {
        if (!cur) return;
        dfs(cur->left);
        if (!prev){
           prev = true;
           preval = cur->val;
        }
        else if (preval >= cur->val) {
            res = false;
            return;
        } 
        preval = cur->val;
        dfs(cur->right);
    }
};