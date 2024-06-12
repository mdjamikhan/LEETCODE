class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n=nums.size();
        int maxi=1;
        vector<int>dp(n,1);
        vector<int>count(n,1);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j] && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                    //it is inherit new one
                    count[i]=count[j];
                }
                else if(nums[i]>nums[j] && dp[j]+1==dp[i] ){
                    //her it is same value so we add up prev one
                    count[i]+=count[j];
                }
            }
            maxi=max(maxi,dp[i]);
        }
        int num=0;
        for(int i=0;i<n;i++)
        {
            if(maxi==dp[i]) num+=count[i];
        }
        return num;
        
    }
};