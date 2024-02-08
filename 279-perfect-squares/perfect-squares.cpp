class Solution {
public:
    int numSquares(int n) {
vector<int> dp(n+1,INT_MAX);
        dp[0] = 0;

        for(int i = 1; i <= n; i++)
        {
            int mini = INT_MAX;
            for(int j = 1; j * j <= i; j++)
            {
                int perfectSquare = j * j;
                int ans = 1 + dp[i - perfectSquare];
                mini = min(mini,ans);
            }
            dp[i] = mini;
        }
        
        return dp[n];

    }
};