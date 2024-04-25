class Solution {
public:
int solve(int i,int j,int k,string s,vector<vector<int>>&dp){
    if(i==s.size()) return 0;
    if(dp[i][j-'a']!=-1) return dp[i][j-'a'];
    int take=0;
    int nottake=0;
    if(j=='{'||abs(s[i]-j)<=k){
        take=1+solve(i+1,s[i],k,s,dp);
    }
 
        nottake=solve(i+1,j,k,s,dp);

    return dp[i][j-'a']=max(take,nottake);
}
    int longestIdealString(string s, int k) {
        int n=s.size();
        vector<vector<int>>dp(n,vector<int>(27,-1));
        return solve(0,'{',k,s,dp);
        
    }
};