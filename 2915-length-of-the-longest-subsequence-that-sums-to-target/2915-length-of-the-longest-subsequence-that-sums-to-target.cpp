class Solution {
public:
int solve(int i,int target,vector<int>&nums,vector<vector<int>>&dp){
    if(target==0) return 0;

    if(i==0  && target==0) return 0;

    if(i<0 || target<0) return -1001;
   


    if(dp[i][target]!=-1) return dp[i][target];
    int nottake=solve(i-1,target,nums,dp);
    int take=-1001;
    if(nums[i]<=target) {

        take=1+solve(i-1,target-nums[i],nums,dp);
    }
    return dp[i][target]=max(take,nottake);
}
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n=nums.size();
    
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        int ans=solve(n-1,target,nums,dp);
        return ans<0? -1:ans;        
    }
};