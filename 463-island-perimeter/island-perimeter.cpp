class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int count=0;
        for(int i =0;i<grid.size();i++)
        {
            for(int j =0;j<grid[i].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count+=4;
                    if(i>0 && grid[i-1][j]==1)
                    count-=2;
                    if(j>0 && grid[i][j-1]==1)
                    count-=2;

                }
            }
        }
        return count;
    }
};