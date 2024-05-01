class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=0;
        for(int i =0;i<word.length();i++)
        {
            if(word[i]==ch)
            {idx=i;
            break;
            }
        }
        for(int i =0;i<=idx;i++)
        {
            swap(word[i],word[idx--]);
        }
        return word;
    }
};