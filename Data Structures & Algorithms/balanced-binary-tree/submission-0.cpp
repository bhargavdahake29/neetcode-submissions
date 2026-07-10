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
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }

        int leftHeight = maxDepth(root->left);
        int rightHeight = maxDepth(root->right);

        return max(leftHeight, rightHeight) + 1;
    }
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }

        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);

        if (abs(leftDepth - rightDepth) > 1) {
            return false;
        }
        return isBalanced(root->left) && isBalanced(root->right);
    }
    };
