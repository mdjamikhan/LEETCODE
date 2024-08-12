class Solution {
public:
int solve(int i,vector<int>&nums,vector<int>&dp){
    if(i>=nums.size()-1) return 0;
    if(nums[i]==0) return 9999;
    if(dp[i]!=-1) return dp[i];

    int mini=INT_MAX;
    int k=nums[i];
    for(int j=1;j<=k;j++)
    {
        mini=min((1+solve(i+j,nums,dp)),mini);
    }
    return dp[i]=mini;



}
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        // int sum=nums[0];
        return solve(0,nums,dp);
        
    }
};