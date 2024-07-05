class Solution {
public:
int mod=1e9+7;
int solve(vector<int>&dp,int n){
   /// if(n<=0) return 0;
    if(n==1) return 1;
    if(n==2) return 2;
    if(n==3) return 5;
    if(dp[n]!=-1) return dp[n];

    return dp[n]=((solve(dp,n-1)*2)%mod +(solve(dp,n-3))%mod)%mod;
}


    int numTilings(int n) {
        vector<int>dp(n+1,-1);
        return solve(dp,n);
        
    }
};