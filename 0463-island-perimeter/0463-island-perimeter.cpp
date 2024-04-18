class Solution {
public:

    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
       int peri=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1){
                    peri+=(i==0||grid[i-1][j]==0)?1:0;
                    peri+=(i==n-1||grid[i+1][j]==0)?1:0;
                    peri+=(j==m-1||grid[i][j+1]==0)?1:0;
                    peri+=(j==0||grid[i][j-1]==0)?1:0;
                }

            }
        }
        return peri;
        

        
    }
};