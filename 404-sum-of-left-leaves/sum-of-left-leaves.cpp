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
    void traversal(TreeNode *root,int &sum)
    {
        if(root!=NULL)

        {
            cout<<root->val<<endl;;
            if(root->left!=NULL)
            {
            if(root->left->left==NULL && root->left->right==NULL)
            {
                
            
            sum=sum+root->left->val;
            cout<<sum<<endl;
            }
            else
            traversal(root->left,sum);
            }
            traversal(root->right,sum);
            
            return;

    }
    return;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        if(root->left==NULL&&root->right==NULL)
        {
            return 0;
        }
        int sum=0;
        traversal(root,sum);
        return sum;
    }
};