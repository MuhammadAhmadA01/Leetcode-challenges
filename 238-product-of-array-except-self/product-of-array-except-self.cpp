class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>s(nums.size(),1);
        int p=1;
        for(int i =0;i<nums.size();i++)
        {
            s[i]=s[i]*p;
            p=p*nums[i];
        }
        p=1;
        for(int i =nums.size()-1;i>=0;i--)
        {
            s[i]=s[i]*p;
            p=p*nums[i];
        }
        return s;
    }
};