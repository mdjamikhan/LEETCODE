class Solution {
public:
int solve(int i,int j,int n,int m,vector<vector<int>>&coins,vector<vector<vector<int>>>&dp,int chance){
    if(i==n && j==m) {
        if(chance>0 && coins[i][j]<0) return 0;

        return coins[i][j];
    }
    if(i>n || j>m) return INT_MIN;
    if(dp[i][j][chance]!=-1) return dp[i][j][chance];
    int take=INT_MIN;
    int nottake=INT_MIN;
    
    
        take=coins[i][j]+max(solve(i+1,j,n,m,coins,dp,chance),solve(i,j+1,n,m,coins,dp,chance));
    
    if(chance>0 && coins[i][j]<0){
        nottake=max(solve(i+1,j,n,m,coins,dp,chance-1),solve(i,j+1,n,m,coins,dp,chance-1));
    }

    return dp[i][j][chance]=max(take,nottake);
}
    int maximumAmount(vector<vector<int>>& coins) {
        int n=coins.size();
        int m=coins[0].size();
        // vector<vector<int>>dp(n,vector<int>(m,-1));
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(3,-1)));
        //int prev=0;
        return solve(0,0,n-1,m-1,coins,dp,2);
        
    }
};