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
 int minSwaps(vector<int> nums)
	{
	    int size=nums.size(),count=0;
	    vector<pair<int,int>> vec;
	    for(int i=0;i<size;i++)
	        vec.push_back({nums[i],i});
	    sort(vec.begin(),vec.end());
	    for(int i=0;i<size;i++){
	        while(i!=vec[i].second){
	            swap(vec[i],vec[vec[i].second]);
	            count++;
	        }
	    }
	    return count;
	}
    int minimumOperations(TreeNode* root) {
         int count=0;
        queue<TreeNode*> q;
        q.push(root);
        while(q.size()){
            int size=q.size();
            vector<int> vec;
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                vec.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            count+=minSwaps(vec); 
        }
        return count;
    }
};