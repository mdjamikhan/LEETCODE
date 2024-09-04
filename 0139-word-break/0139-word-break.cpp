class Solution {
public:
int solve(int i,string &s,vector<string>&word,vector<int>&dp,set<string>&st){
    if(i==s.size()) return 1;

    if(dp[i]!=-1) return dp[i];

    string temp="";
    for(int k=i;k<s.size();k++)
    {
        temp+=s[k];
        if(st.find(temp)!=st.end()){
            
          dp[i]=1;
            if(solve(k+1,s,word,dp,st)) return 1;
        }
    }
    return dp[i]=0;
}

    bool wordBreak(string s, vector<string>& word) {
        vector<int>dp(s.size(),-1);
        set<string>st(word.begin(),word.end());
        return solve(0,s,word,dp,st);
      
    }
};