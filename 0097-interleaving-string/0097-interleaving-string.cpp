class Solution {
public:
int solve(int i,int j,int k,string s1,string s2,string s3,vector<vector<vector<int>>>&dp){
    if(k == s3.size()) return (i == s1.size() && j == s2.size());
    if(i==s1.size() && j==s2.size()) return 0;

    if(dp[i][j][k]!=-1) return dp[i][j][k];

    dp[i][j][k]=0;

    if(s1[i]==s3[k]) dp[i][j][k]|=solve(i+1,j,k+1,s1,s2,s3,dp);
    if(s2[j]==s3[k]) dp[i][j][k]|=solve(i,j+1,k+1,s1,s2,s3,dp);
    // if(s1[i]==s3[k] && s2[j]==s3[k]) dp[i][j][k]=solve(i+1,j,k+1,s1,s2,s3,dp) || solve(i,j+1,k+1,s1,s2,s3,dp);

    return dp[i][j][k];

}
    bool isInterleave(string s1, string s2, string s3) {
        int n=s1.size();
        int m=s2.size();
        vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(m+1, vector<int>(s3.size()+1, -1)));
        return solve(0,0,0,s1,s2,s3,dp);
        
    }
};