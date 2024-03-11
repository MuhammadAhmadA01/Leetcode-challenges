class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        if(nums1.size()==0||nums1.size()==0)
            return ans;
        for(int i =0;i<nums1.size();i++)
            for(int j=0;j<nums2.size();j++)
                if(nums1[i]==nums2[j])
                {
                    ans.push_back(nums1[i]);
                    break;
                }
         set<int> uniqueSet(ans.begin(), ans.end());
    return vector<int>(uniqueSet.begin(), uniqueSet.end());
    }
};