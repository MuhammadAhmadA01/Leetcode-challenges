class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag=0;
        for(int i =0;i<nums.size()-1;i++)
            if(nums[i]<=nums[i+1])
            continue;
            else
            {
                flag=1;
                break;
            }
        if(flag)
        for(int i =0;i<nums.size()-1;i++)
            if(nums[i]>=nums[i+1])
            continue;
            else
                return false;
        return true;
    }
};