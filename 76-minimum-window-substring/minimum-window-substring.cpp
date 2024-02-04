class Solution {
public:
    string minWindow(string s, string t) {
         unordered_map<char, int> targetFreq, windowFreq;
        for (char c : t) {
            targetFreq[c]++;
        }
        int left = 0, right = 0, minLength = INT_MAX, minLeft = 0, requiredChars = targetFreq.size();
        while (right < s.length()) {
            char currentChar = s[right];
            windowFreq[currentChar]++;
            if (targetFreq.find(currentChar) != targetFreq.end() && windowFreq[currentChar] == targetFreq[currentChar])                 requiredChars--;
            while (requiredChars == 0) {
                if (right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    minLeft = left;
                }
                char leftChar = s[left];
                windowFreq[leftChar]--;
                if (targetFreq.find(leftChar) != targetFreq.end() && windowFreq[leftChar] < targetFreq[leftChar]) 
                    requiredChars++;
               left++;
            }
           right++;
        }
        if (minLength == INT_MAX) 
            return "";
        return s.substr(minLeft, minLength);
    }
};