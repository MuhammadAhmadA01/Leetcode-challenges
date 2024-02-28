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
    int findBottomLeftValue(TreeNode* root) {
        int leftmost_value;
        int max_depth = -1;
        findBottomLeftValueHelper(root, 0, max_depth, leftmost_value);
        return leftmost_value;
    }
    void findBottomLeftValueHelper(TreeNode* node, int depth, int& max_depth, int& leftmost_value) {
        if (node == nullptr) return;

        if (depth > max_depth) {
            max_depth = depth;
            leftmost_value = node->val;
        }

        findBottomLeftValueHelper(node->left, depth + 1, max_depth, leftmost_value);
        findBottomLeftValueHelper(node->right, depth + 1, max_depth, leftmost_value);
    }
};
