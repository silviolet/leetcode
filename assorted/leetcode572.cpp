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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (!root) return false;
        return isSubtree(root->left, subRoot) || helper(root, subRoot) || isSubtree(root->right, subRoot);
    }
    TreeNode* findNode(TreeNode* root, TreeNode* subRoot) {
        if (!root) return nullptr;
        TreeNode* left {findNode(root->left, subRoot)};
        if (left) return left;
        if (root->val == subRoot->val) return root;
        TreeNode* right {findNode(root->right, subRoot)};
        return right;
    }
    bool helper(TreeNode* root, TreeNode* subRoot) {
        if (!root && !subRoot) return true;
        if (((root == nullptr) && !(subRoot == nullptr)) || (!(root == nullptr) && (subRoot == nullptr))) return false;
        return helper(root->left, subRoot->left) && (root->val == subRoot->val) && helper(root->right, subRoot->right);
    }
};