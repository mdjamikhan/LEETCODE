class Solution {
public:
// int res=1;
int solve(int i,string s,vector<int>&dp){
    if(i==s.size()) return 1;
    if(s[i]=='0') return 0;
    if(dp[i]!=-1) return dp[i];

    int res=solve(i+1,s,dp);
    if(i+1<s.size()){
        int two=(s[i]-'0')*10 +(s[i+1]-'0');
        if(two<=26){
            res+=solve(i+2,s,dp);
            
        }
    }
    
    return dp[i]=res;

}
    int numDecodings(string s) {
        int n=s.size();
        vector<int>dp(n,-1);
        return solve(0,s,dp);
        
    }
};