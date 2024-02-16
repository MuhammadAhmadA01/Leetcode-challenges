class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> mp;
        for (int& x : arr)
            mp[x]++;
        vector<int> count;
        for (auto& pair : mp)
            count.push_back(pair.second);
        sort(count.begin(), count.end());
        int c = 0;
        for (int& f : count)
            if (k >= f) {
                k -= f;
                c++;
            } else
                break;
        return count.size() - c;
    }
};