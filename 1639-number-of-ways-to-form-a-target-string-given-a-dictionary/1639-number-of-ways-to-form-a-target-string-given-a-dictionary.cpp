class Solution {
public:
int solve(int i,int j,vector<string>& words, string &target,vector<vector<int>>&freq, vector<vector<int>>&dp){
    if(j==target.size()) return 1;
    if(words[0].size()==i || words[0].size()-i<target.size()-j) return 0;

    if(dp[i][j]!=-1) return dp[i][j];
    long coutways=0;
    int currpos=target[j]-'a';

    coutways+=solve(i+1,j,words,target,freq,dp);

    coutways+=freq[i][currpos]*solve(i+1,j+1,words,target,freq,dp);

    return dp[i][j]=(coutways)%1000000007;


}
    int numWays(vector<string>& words, string target) {
        int n=words[0].size();
        int m=target.size();
        vector<vector<int>>dp(n,vector<int>(m,-1));
        vector<vector<int>>freq(n,vector<int>(26,0));
        for(int i=0;i<words.size();i++){
            for(int j=0;j<n;j++){
                int chart=words[i][j]-'a';
                freq[j][chart]++;
            }
        }
        return solve(0,0,words,target,freq,dp);
        
    }
};