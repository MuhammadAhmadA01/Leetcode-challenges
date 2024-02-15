class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long long current = 0, perimeter = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < current)
                perimeter = current + nums[i];
            current += nums[i];
        }
        return (perimeter == 0) ? -1 : perimeter;
    }
};