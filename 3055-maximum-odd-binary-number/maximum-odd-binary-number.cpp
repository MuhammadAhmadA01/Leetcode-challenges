class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=-1;
        for (char &bit: s)
        {
            if(bit=='1')
            count++;
            bit='0';
        }
        int idx=0;
        s[s.length()-1]='1';
        while(count>0)
        {
            s[idx++]='1';
            count--;
        }
        return s;
    }
};