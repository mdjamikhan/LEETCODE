class Solution {
public:
int solve(int i,int buy,int lim,vector<int>&prices,vector<vector<vector<int>>>&dp){
    if(i==prices.size()) return 0;
    if(lim==0) return 0;
    if(dp[i][buy][lim]!=-1) return dp[i][buy][lim];
    
    int profit=0;
    if(buy){
        profit=max(-prices[i]+solve(i+1,0,lim,prices,dp),0+solve(i+1,1,lim,prices,dp));
    }
    else{
        profit=max(prices[i]+solve(i+1,1,lim-1,prices,dp),0+solve(i+1,0,lim,prices,dp));
    }
    return dp[i][buy][lim]=profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
       // vector<vector<int>>dp(n,vector<int>(2,-1));
     //   vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
       // return solve(0,1,2,prices,dp);

        vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<=1;j++)
            {
                for(int k=1;k<=2;k++)
                {
                    if(j){
                        dp[i][j][k]=max(-prices[i]+dp[i+1][0][k],0+dp[i+1][1][k]);
                    }
                    else{
                        dp[i][j][k]=max(prices[i]+dp[i+1][1][k-1],0+dp[i+1][0][k]);
                    }
                }
            }
        }
        return dp[0][1][2];
        
    }
};