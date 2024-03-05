class Solution {
public:
    int minimumLength(string s) {
        if (s.length() <= 1)
            return s.length();
        int left = 0, right = s.length() - 1;
        for (; left < right && s[left] == s[right]; left++, right--) {
            while (s[left] == s[left + 1] && (left + 1) < right)
                left++;
            while (s[right] == s[right - 1] && left < right - 1)
                right--;

        }
        return right-left+1;
    }
};