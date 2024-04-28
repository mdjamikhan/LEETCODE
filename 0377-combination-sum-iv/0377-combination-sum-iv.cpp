class Solution {
public:
int solve(int i,vector<int>&nums,int target,vector<int>&dp,int n)
{
    int sum=0;
    if(target==0){
         
         return 1;
    }
    if(target<0) return 0;
   if(dp[target]!=-1) return dp[target];


    for(int j=0;j<n;j++)
    {
        if(target>=nums[j]){
            
            sum+=solve(j,nums,target-nums[j],dp,n);
            
        }
    }
    return dp[target]=sum;
}
    int combinationSum4(vector<int>& nums, int target) {
       
        vector<int>dp(target+1,-1);
        int n=nums.size();
        return solve(0,nums,target,dp,n);
        //return ans;
        
    }
};