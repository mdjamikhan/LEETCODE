class Solution {
public:
    int minimumMountainRemovals(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp1(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0; j<i;j++)
            {
                if(nums[i]>nums[j] && dp1[j]+1>dp1[i]){
                    dp1[i]=dp1[j]+1;
                }
            }
        }
        vector<int>dp(n,1);
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--)
            {
                if(nums[i]>nums[j] && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                }
            }
        }
        int maxi=1;
        for(int i=1;i<n-1;i++)
        {
            if(dp[i]>1 && dp1[i]>1) maxi=max(maxi,dp1[i]+dp[i]-1);
        }
        return n-maxi;
    }
};