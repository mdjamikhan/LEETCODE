#include <vector>
#include <climits> // for INT_MAX
using namespace std;

class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& dp) {
        int n=grid.size();
        if (i == n-1) return grid[i][j];
        if ( j < 0 || j >= n) return INT_MAX; 
        if (dp[i][j] != -1) return dp[i][j];
        int sum=INT_MAX;
        for(int k=0;k<n;k++)
        {
            if(j!=k){
             sum=min(sum,grid[i][j]+solve(i+1,k,grid,dp));
            }
        }

        return dp[i][j] = sum;
    }

    int minFallingPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int sum2 = INT_MAX; 
        vector<vector<int>> dp(n, vector<int>(m, -1));
        
        for (int j = 0; j < n; ++j) {
            int x=solve(0,j,grid,dp);
            sum2=min(sum2,x);

        }
        
        return sum2;
    }
};
