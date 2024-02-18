class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int ans_len = 0, cost = 0,start = 0, end   = 0;
        while(end < (s.length()))
        {
            int diff = abs(t[end] - s[end]);

            while((start <= end) && (cost + diff) > maxCost)
            {
                cost = cost - abs(t[start] - s[start]);
                start++;
            }
            cost = cost + diff;
            ans_len = max(ans_len,(end - start + 1));
            end++;
        }
        return ans_len;
    }
};