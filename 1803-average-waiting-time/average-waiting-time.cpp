class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& c) {
        double ans = 0, totalTime = c[0][0], waitTime = 0;
        for (int i = 0; i < c.size(); i++) {
            if (c[i][0] < totalTime) {
                totalTime += c[i][1];
                waitTime += totalTime - c[i][0];
            } else {
                totalTime = c[i][0] + c[i][1];
                waitTime += c[i][1];
            }
        }
        return waitTime / (c.size());
    }
};