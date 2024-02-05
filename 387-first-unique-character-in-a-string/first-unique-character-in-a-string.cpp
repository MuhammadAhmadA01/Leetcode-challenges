class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>m;
        for(int i =0;i<s.length();i++)
        {
            if(m[s[i]]>=1)
            {
                m[s[i]]++;
            }
            else
            m[s[i]]=1;
        }
        for(int i =0;i<s.length();i++)
        {
            if(m[s[i]]==1)
            {
                return i;
            }
        }
        return -1;
    }
};