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
bool res {true};
public:
    bool isSymmetric(TreeNode* root) {
        helper(root->left, root->right);
        return res;
    }
    void helper(TreeNode* left, TreeNode* right) {
        if ((!left && right) || (left && !right)) {
            res = false;
            return;
        }
        if (!left && !right) return;
        helper(left->left, right->right);
        if (left->val != right->val) {
            res = false;
            return;
        }
        helper(left->right, right->left);
    }
};