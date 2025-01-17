class Solution {
public:
int m=1e9+7;
long long solve(int i,string &s,vector<long long>&dp){
    if(i>=s.size()) return 1;
    if(s[i]=='0') return 0;
    if(dp[i]!=-1) return dp[i];
    long long ans=0;
    if(s[i]=='*'){
        ans+=9*solve(i+1,s,dp);
        if(i+1<s.size()){
            if(s[i+1]>='0' && s[i+1]<='6'){
                ans+=2*solve(i+2,s,dp);
            }
            else if(s[i+1]=='*'){
                ans+=15*solve(i+2,s,dp);
            }
           // else if(s[i+1]=='2') ans+=6*solve(i+2,s,dp);
            else{
                ans+=solve(i+2,s,dp);
            }
        }
    }
    else{
        ans+=solve(i+1,s,dp);
        if(i+1<s.size()){
            if(s[i]=='1')
            {
                if(s[i+1]=='*'){
                    ans+=9*solve(i+2,s,dp);
                }
                else{
                    ans+=solve(i+2,s,dp);
                }
            }
            else if(s[i]=='2'){
                if(s[i+1]=='*'){
                    ans+=6* solve(i+2,s,dp);
                }
                else if(s[i+1]>='0' && s[i+1]<='6'){
                    ans+=solve(i+2,s,dp);
                }      
            }
        }    
    }
    return dp[i]=(ans)%m;
}
    int numDecodings(string s) {
        int n=s.size();
        vector<long long>dp(n,-1);
        return(int) solve(0,s,dp);
        
    }
};