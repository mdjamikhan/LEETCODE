class Solution {
public:
unordered_set<string>mp;
int solve(int i,string &s,vector<int>&dp){
    if(i==s.size()) return 0;
    if(dp[i]!=-1) return dp[i];
    int maxiextra=1+solve(i+1,s,dp);
    for(int j=i+1;j<=s.size();j++)
    {
        string temp=s.substr(i,j-i);
        if(mp.find(temp)!=mp.end()){
            maxiextra=min(maxiextra,solve(j,s,dp));
        }
    }
    return dp[i]=maxiextra;

    

}
    int minExtraChar(string s, vector<string>& dict) {
        int n=s.size();
       // int m=dicitionary.size();
        vector<int>dp(s.size(),-1);
        for(string it:dict){

            mp.insert(it);
        }

        return solve(0,s,dp);



        
    }
};