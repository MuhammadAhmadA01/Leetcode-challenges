class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> countFreq;
        for (char c : s)
            countFreq[c]++;
        vector<char> sortedValues;
        for (const auto& e : countFreq)
            sortedValues.push_back(e.first);
        sort(sortedValues.begin(), sortedValues.end(),
             [&](char a, char b) { return countFreq[a] > countFreq[b]; });
        string result;
        for (char c : sortedValues)
            result += string(countFreq[c], c);
        return result;
    }
};