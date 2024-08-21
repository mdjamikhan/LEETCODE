class Solution {
public:
int solve(int start,int end,string s,vector<vector<int>>&dp){
    if(start>end) return 0;
    if(start==end) return 1;
    if(dp[start][end]!=-1) return dp[start][end];
    int i=start+1;
    while(i<=end && s[start]==s[i]) i++;
    int append=1+solve(i,end,s,dp);
    int replace=INT_MAX;
    for(int j=i;j<=end;j++){
        if(s[start]==s[j]){
            replace=min(replace,solve(i,j,s,dp)+solve(j+1,end,s,dp));
        }
    }
    return dp[start][end]=min(replace,append);
}
    int strangePrinter(string s) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(0,n-1,s,dp);

        
    }
};