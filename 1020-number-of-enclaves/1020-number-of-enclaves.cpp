class Solution {
public:
void dfs(int row,int col, vector<vector<int>>&vis, vector<vector<int>>&grid,int n,int m,int delRow[],int delCol[]){
    vis[row][col]=1;

    for(int i=0;i<4;i++)
    {
        int nrow=row+delRow[i];
        int ncol=col+delCol[i];
        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
            dfs(nrow,ncol,vis,grid,n,m,delRow,delCol);
        }
    }
}
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int delRow[]={-1,0,1,0};
        int delCol[]={0,-1,0,1};

        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int i=0;i<n;i++)
        {
            if(!vis[i][0] && grid[i][0]==1) dfs(i,0,vis,grid,n,m,delRow,delCol);
            if(!vis[m-1][i] && grid[m-1][i]) dfs(m-1,i,vis,grid,n,m,delRow,delCol);
        }
        for(int j=0;j<m;j++)
        {
            if(!vis[0][j] && grid[0][j]==1) dfs(0,j,vis,grid,n,m,delRow,delCol);
            if(!vis[n-1][j] && grid[n-1][j]) dfs(n-1,j,vis,grid,n,m,delRow,delCol);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j]  && grid[i][j]==1) count++;
            }
        }
        return count;
        
    }
};