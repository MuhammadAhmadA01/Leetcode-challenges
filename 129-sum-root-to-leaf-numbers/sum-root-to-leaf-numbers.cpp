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
    int dfs(TreeNode * current, int number)
    {
        if(!current)
        return 0;
        number=number*10+current->val;
        if(!current->left&&!current->right)
        {
            return number;

        }
        return dfs(current->left,number)+dfs(current->right,number);
    }
    int sumNumbers(TreeNode* root) {
        int result=dfs(root,0);
        return result;
    }
};