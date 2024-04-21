class Solution {
public:
    bool pathCheckUsingDfs(vector<int> &visited,vector<vector<int>> &g,int s,int e)
    {   
        if(s==e)return true;
        visited[s]=1;
        for(auto n:g[s])
        {
            if(!visited[n])
            {
                if(pathCheckUsingDfs(visited,g,n,e))return true;
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {    vector<vector<int>>g(n,vector<int>());
    vector<int>visited(n,0);
    for(auto e:edges)
    {
        int s=e[0];
        int d=e[1];
        g[s].push_back(d);
        g[d].push_back(s);
    }
    return pathCheckUsingDfs(visited,g,source,destination);
 
     
       }
};