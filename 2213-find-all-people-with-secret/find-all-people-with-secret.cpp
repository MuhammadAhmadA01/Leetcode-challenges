class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings,
                              int firstPerson) {
        vector<bool> can(n);
        can[0] = can[firstPerson] = true;
        map<int, vector<pair<int, int>>> mp;
        for (auto& meeting : meetings)
            mp[meeting[2]].emplace_back(meeting[0], meeting[1]);
        for (auto& [k, v] : mp) {
            unordered_map<int, vector<int>> graph;
            unordered_set<int> st;
            for (auto& [x, y] : v) {
                graph[x].push_back(y);
                graph[y].push_back(x);
                if (can[x])
                    st.insert(x);
                if (can[y])
                    st.insert(y);
            }
            queue<int> q;
            for (auto& x : st)
                q.push(x);
            while (q.size()) {
                auto x = q.front();
                q.pop();
                for (auto& y : graph[x])
                    if (!can[y]) {
                        can[y] = true;
                        q.push(y);
                    }
            }
        }
        vector<int> ans;
        for (int i = 0; i < n; ++i)
            if (can[i])
                ans.push_back(i);
        return ans;
    }
};