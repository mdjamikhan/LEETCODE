class Solution {
public:
int count1=0;
void dfs(int i,int j,vector<vector<int>>& grid1,vector<vector<int>>& grid2,bool &isplace)
{
    if(i<0 || j<0 || i>=grid1.size() || j>=grid2[0].size()|| grid2[i][j]==0){
        return;
    }
    if(grid1[i][j]==0 && grid2[i][j]==1){
        isplace=false;
    }
    grid2[i][j]=0;

    
    dfs(i+1,j,grid1,grid2,isplace);
    dfs(i-1,j,grid1,grid2,isplace);
    dfs(i,j+1,grid1,grid2,isplace);
    dfs(i,j-1,grid1,grid2,isplace);
}
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int n=grid1.size();
        int m=grid1[0].size();
        int count=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if( grid2[i][j]==1){
                    bool isplace=true;
                    dfs(i,j,grid1,grid2,isplace);
                    if(isplace) count++;
                   
                }
            }
        }
        return count;
        
    }
};