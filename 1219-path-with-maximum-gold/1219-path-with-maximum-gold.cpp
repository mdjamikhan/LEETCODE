class Solution {
public:
int solve(int i,int j,vector<vector<int>>& grid,int n,int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0)
    {
        return 0;
    }
   
    int temp=grid[i][j];
    grid[i][j]=0;
    
    int sum=temp+max({solve(i+1,j,grid,n,m),solve(i,j+1,grid,n,m),solve(i-1,j,grid,n,m),solve(i,j-1,grid,n,m)});
    grid[i][j]=temp;
    return sum;
}

    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxi=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]!=0){
                    int sum=solve(i,j,grid,n,m);
                    maxi=max(maxi,sum);

                }

            }
        }
        return maxi;

        
    }
};