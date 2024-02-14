class Solution {
public:
    int numSteps(string s) {
       int zeroBetweenOne = 0;
        int oneCount = 0; 
        int strSize = s.size();
        for(int i = strSize-1; i >= 0; i--) 
            if(s[i] == '1')
                oneCount++;
            else if(oneCount > 0)
                zeroBetweenOne++;  
        if(oneCount == 1) 
            return strSize - 1; 
        else 
            return zeroBetweenOne + 1 + strSize;      
               }

};