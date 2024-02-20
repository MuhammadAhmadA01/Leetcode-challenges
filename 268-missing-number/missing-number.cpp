class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        int max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<=max+1;i++)
            if(m.find(i)==m.end())
                return i;
        return 0;
    }
};