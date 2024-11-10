class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,1);

        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i]){
                dp[i]=dp[i+1]+1;
            }

            cout<<dp[i]<<" ";
        }
        int ans=0;
        int low=0;
        int high=n/2;
        while(low<=high){
            int mid=(low+high)/2;
            int check=false;

            for(int i=0;i+2*mid<=n;i++){
                if(dp[i]>=mid && dp[mid+i]>=mid){
                    check=true;
                    break;
                }
            }
            if(check){
                ans=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }

        }
        return ans;
        


        
    }
};