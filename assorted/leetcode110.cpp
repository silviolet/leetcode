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
    bool isBalanced(TreeNode* root) {
        if (!root) return true;
        bool unbalanced_found {false};
        int left{maxHeight(root->left, unbalanced_found)}, right{maxHeight(root->right, unbalanced_found)};
        if (unbalanced_found) return false;
        return (left == right || abs(left - right) == 1);
    }
    int maxHeight(TreeNode* curr, bool& unbalanced_found) {
        if (!curr) return 0;
        int left{maxHeight(curr->left, unbalanced_found)}, right{maxHeight(curr->right, unbalanced_found)};
        if (abs(left - right) > 1) unbalanced_found = true;
        return max(left, right) + 1;
    }
};