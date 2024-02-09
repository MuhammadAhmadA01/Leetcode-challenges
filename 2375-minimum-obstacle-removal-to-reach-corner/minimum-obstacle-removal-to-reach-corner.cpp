class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
         int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0)); //declare a visited array
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> q;
        q.push({0,{0,0}});
        vis[0][0]=1;
        while(!q.empty()){
            int wt=q.top().first;
            int r=q.top().second.first;
            int c=q.top().second.second;
            q.pop();
            if(r==n-1 && c== m-1) return wt; 
            int dir[]={-1,1,0,0};
            int dic[]={0,0,1,-1};
            for(int i=0;i<4;i++){
                int row=dir[i]+r;
                int col=dic[i]+c;
                if(row>=0 && row<n && col>=0 && col<m && 
                !vis[row][col]){
                q.push({wt+grid[row][col],{row,col}});
                vis[row][col]=1;
                }
            }
        }
        return 0;
    }
};