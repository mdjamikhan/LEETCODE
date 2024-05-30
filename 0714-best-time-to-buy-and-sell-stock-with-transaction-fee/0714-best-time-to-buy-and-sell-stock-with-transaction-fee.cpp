class Solution {
public:
int solve(int i,int buy,int fee,vector<int>&prices,vector<vector<int>>&dp){
    if(i==prices.size()) return 0;
    if(dp[i][buy]!=-1) return dp[i][buy];
    int profit=0;
    if(buy){
        return dp[i][buy]=max(-prices[i]+solve(i+1,0,fee,prices,dp),solve(i+1,1,fee,prices,dp));
    }
    else{
        return dp[i][buy]=max(prices[i]-fee+solve(i+1,1,fee,prices,dp),solve(i+1,0,fee,prices,dp));
    }
    

}
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<vector<int>>dp(n,vector<int>(2,-1));
        return solve(0,1,fee,prices,dp);
        
    }
};