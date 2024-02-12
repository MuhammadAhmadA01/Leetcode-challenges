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
vector<int>v;
    void inOrder(TreeNode * root)
    {
        if(root!=NULL)
        {
            inOrder(root->left);
            v.push_back(root->val);
            inOrder(root->right);
        }
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        inOrder(root1);
        inOrder(root2);
        sort(v.begin(),v.end());
        return v;
    }
};