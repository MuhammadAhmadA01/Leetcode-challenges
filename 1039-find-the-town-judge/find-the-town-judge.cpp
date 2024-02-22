class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int>m;
        for(int i =1;i<=n;i++)
            m[i]=0;
        for(auto i:trust)
        {
            m[i[0]]--;
            m[i[1]]++;
        }
        for(int i=1;i<=n;i++)
            if(m[i]==n-1)
            return i;
        return -1;
    }
};