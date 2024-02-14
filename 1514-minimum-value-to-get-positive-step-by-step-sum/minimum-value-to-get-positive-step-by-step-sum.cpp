class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int ans = 0, sum = 0;
        for(auto num : nums)
            sum += num, ans = min(ans, sum);
        return -ans+1;
    }
};