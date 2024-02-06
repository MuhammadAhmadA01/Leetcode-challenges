class Solution {
public:
    vector<int> beautifulArray(int n) {
        if (n == 1)
            return {1};

        vector<int> arr = beautifulArray(n - 1);

        vector<int> res;
        for (auto i : arr)
            if (2 * i - 1 <= n)
                res.push_back(2 * i - 1);

        for (auto i : arr)
            if (2 * i <= n)
                res.push_back(2 * i);

        return res;
    }
};