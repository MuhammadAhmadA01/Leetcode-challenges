class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> arr;
        int st=0;
        int end=s.length();
        for(int i =0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                arr.push_back(st);
                st++;
            }
            else
            {    arr.push_back(end);
                end--;
            }

        }
           arr.push_back(end);
           return arr;

    }
};