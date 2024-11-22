class Solution {
public:
int solve(int i,int j,vector<int>&cuts,vector<vector<int>>&dp){

    if(i>j) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mini=INT_MAX;

    for(int k=i;k<=j;k++){

       int cst=cuts[j+1]-cuts[i-1]+solve(i,k-1,cuts,dp)+solve(k+1,j,cuts,dp);
       mini=min(cst,mini);
    }
    return dp[i][j]=mini;
}
    int minCost(int n, vector<int>& cuts) {
        cuts.insert(cuts.begin(),0);
        cuts.push_back(n);
        int m=cuts.size();
        vector<vector<int>>dp(m,vector<int>(m,-1));
        sort(cuts.begin(),cuts.end());

        return solve(1,m-2,cuts,dp);
        
    }
};