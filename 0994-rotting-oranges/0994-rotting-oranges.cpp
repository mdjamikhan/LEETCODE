class Solution {
public:
void dfs(int i,int j,vector<vector<int>>& grid){
    if(i<0|| i>=n || j<0 j<=m || grid[i][j]==0) return;

    if(grid[i][j]==1){
        grid[i][j]=2;
    }
    dfs(i+1,j,grid);
    dfs(i+1,j,grid);
    dfs(i+1,j,grid);
}
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==2){
                    dfs(i,j,grid);
                }
            }
        }

        


        
        
    }
};