class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst,
                          int k) {
        vector<pair<int, int>> adj[n];
        for (auto& it : flights)
            adj[it[0]].push_back({it[1], it[2]});

        vector<int> dis(n);
        for (int i = 0; i < n; i++)
            dis[i] = INT_MAX;
        dis[src] = 0;
        queue<pair<int, pair<int, int>>> pq;
        pq.push({src, {0, 0}});

        while (!pq.empty()) {
            int node = pq.front().first;
            int step = pq.front().second.first;
            int d = pq.front().second.second;
            pq.pop();
            for (auto& it : adj[node]) {
                int newnode = it.first;
                int newd = it.second;
                if ((newd + d < dis[newnode]) && step <= k) {
                    dis[newnode] = newd + d;
                    pq.push({newnode, {step + 1, newd + d}});
                }
            }
        }
        if (dis[dst] == INT_MAX)
            return -1;
        return dis[dst];
    }
};