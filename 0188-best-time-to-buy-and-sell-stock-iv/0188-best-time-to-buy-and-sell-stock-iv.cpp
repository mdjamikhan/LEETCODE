class Solution {
public:
int solve(int i,int buy,int k,vector<int>& prices, vector<vector<vector<int>>>&dp){
    if(i==prices.size()) return 0;
    if(k==0) return 0;
    
    if(dp[i][buy][k]!=-1) return dp[i][buy][k];
    int sum=0;
    if(buy){
        sum+=max(-prices[i]+solve(i+1,0,k,prices,dp),solve(i+1,1,k,prices,dp));
    }
    else{
        sum+=max(prices[i]+solve(i+1,1,k-1,prices,dp),solve(i+1,0,k,prices,dp));
    }
    return dp[i][buy][k]=sum;
}



    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(k+1,-1)));
        return solve(0,1,k,prices,dp);

        //  vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,0)));

        //  for(int i=n-1;i>=0;i--)
        //  {
        //     for(int j=0;j<=1;j++)
        //     {
        //         for(int s=1;s<=k;s++)
        //         {
        //             if(j){
        //                 dp[i][j][s]=max(-prices[i]+dp[i+1][0][s],0+dp[i+1][1][s]);
        //             }
        //             else{
        //                 dp[i][j][s]=max(prices[i]+dp[i+1][1][s-1],0+dp[i+1][0][s]);
        //             }
        //         }
        //     }
        //  }
        //  return dp[0][1][k];
        
    }
};