class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i =0;i<words.size();i++)
        {
            string tmp=words[i];
            reverse(words[i].begin(),words[i].end());
            if(tmp==words[i])
            return tmp;
        }
        return "";
    }
};