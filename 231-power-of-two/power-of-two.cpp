class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)
        {
            return true;
        }
        if(n <= 0) return false;
        while(n>1)
        {
            int tmp=n%2;
            if(tmp==0)
                n=n/2;
            else
             return false;
        }
        return true;
    }
};