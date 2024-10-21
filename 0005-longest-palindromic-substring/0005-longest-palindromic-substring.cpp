class Solution {
public:
int dp[1001][1001];
int solve(int i,int j,string s){
    if(i>=j) return 1;
    if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==s[j]){
        //dp[i][j]=1;
        return dp[i][j]=solve(i+1,j-1,s);
    }
    else{
        return dp[i][j]=0;
    }
    //return dp[i][j];
}
    string longestPalindrome(string s) {
        int n=s.size();
        //vector<vector<int>>dp(n,vector<int>(n,-1));
        memset(dp,-1,sizeof(dp));
        int maxi=INT_MIN;
        int start=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(solve(i,j,s)==1){
                    if(maxi<j-i+1){
                        maxi=j-i+1;
                        start=i;
                    }

                }
            }
        }
        return s.substr(start,maxi);
        
        
    }
};