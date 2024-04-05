class Solution {
public:
    string makeGood(string s) {
        stack<char> t;
        t.push(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(t.empty()!=true && t.top()+32==s[i])
                t.pop();
            else if(t.empty()!=true && t.top()==s[i]+32)
                t.pop();
            else
                t.push(s[i]);
        }
        s="";
        while(t.empty()!=true)
        {
            s.push_back(t.top());
            t.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
};