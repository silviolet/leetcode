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
    TreeNode* top {nullptr};
    TreeNode* prev;
public:
    TreeNode* increasingBST(TreeNode* root) {
        helper(root);
        return top;
    }
    void helper(TreeNode* cur) {
        if (!cur) return;
        helper(cur->left);
        TreeNode* temp {cur->right};
        if (!prev) {
            top = cur;
        }
        else {
            prev->right = cur;
        }
        cur->left = nullptr;
        prev = cur;
        helper(temp);
    }
};