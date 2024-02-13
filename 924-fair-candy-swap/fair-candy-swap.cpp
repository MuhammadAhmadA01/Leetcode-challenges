class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumAlice = 0, sumBob = 0;
        for (int candy : aliceSizes)
            sumAlice += candy;
        for (int candy : bobSizes)
            sumBob += candy;
        int target = (sumAlice + sumBob) / 2;
        sort(bobSizes.begin(), bobSizes.end());
        for (int candy : aliceSizes) {
            int diff = target - (sumAlice - candy);
            auto it = lower_bound(bobSizes.begin(), bobSizes.end(), diff);
            if (it != bobSizes.end() && *it == diff)
                return {candy, diff};
        }
        return {};
    }
};