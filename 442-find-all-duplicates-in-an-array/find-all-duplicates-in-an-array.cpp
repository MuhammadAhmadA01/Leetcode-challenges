class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i =0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int>v;
        for(int i =0;i<m.size();i++)
        {
            if(m[i]==2)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};