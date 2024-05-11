class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
         const int n= quality.size();
        
        vector<vector<double>> wage2Quality(n, vector<double>(2));
        
        for(int i= 0; i < n; i++) {
            wage2Quality[i]={(double)wage[i]/quality[i], (double)quality[i]}; 
        }

        sort(wage2Quality.begin(), wage2Quality.end());

        int curTotalQuality = 0;

        priority_queue<int> maxHeap;
        
        for(int i = 0; i < k; i++) {
            maxHeap.push(wage2Quality[i][1]);
            curTotalQuality += wage2Quality[i][1];
        }
        
        double ans = curTotalQuality*wage2Quality[k-1][0];
        
        for(int i = k; i < n; i++) {
            maxHeap.push(wage2Quality[i][1]);
            
            curTotalQuality+=wage2Quality[i][1]-maxHeap.top();
            maxHeap.pop();

            ans = min(ans, curTotalQuality*wage2Quality[i][0]);
        }
        return ans;
    }
};