class Solution {
public:
int solve(int i,int j,string &s,string &p,vector<vector<int>>&dp){
    if(i<0 && j<0) return true;
    if(i<0 && j>=0){
        for(int k=0;k<=j;k++)
        {
            if(p[k]!='*') return false;
        }
        return true;
    }
    if(i>=0 && j<0) return false;
    if(dp[i][j]!=-1) return dp[i][j];

    if(s[i]==p[j] || p[j]=='?') return dp[i][j]=solve(i-1,j-1,s,p,dp);
    if(p[j]=='*') return dp[i][j]=solve(i-1,j,s,p,dp)| solve(i,j-1,s,p,dp);
    return dp[i][j]=false;
}

    bool isMatch(string s, string p) {
        int n=s.size();
        int m=p.size();
        
       // vector<vector<int>>dp(n,vector<int>(m,-1));
       // return solve(n-1,m-1,s,p,dp);

         vector<vector<bool>>dp(n+1,vector<bool>(m+1,false));
         dp[0][0] =true;




        for(int i=1;i<=m;i++){
           if(p[i-1]=='*'){
            dp[0][i]=dp[0][i-1];
            }
            else{
                break;
            }
            
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++)
            {
                if(s[i-1]==p[j-1] || p[j-1]=='?')dp[i][j]=dp[i-1][j-1];
                else if(p[j-1]=='*') dp[i][j]=dp[i][j-1]||dp[i-1][j];
            
            }
        }
        return dp[n][m];
    }
};