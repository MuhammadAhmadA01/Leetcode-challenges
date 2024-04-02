class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length()-1;
        int count=0;
        for(int i =l;i>=0;i--)
        {
            if(count!=0 && s[i]==' ')
            return count;
       
            if(s[i]==' ')
            continue;
            else
            count++;
             }
        return count;
    }
};