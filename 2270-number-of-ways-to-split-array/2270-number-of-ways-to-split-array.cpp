class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        vector<long long>ans(n,0);
        ans[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            ans[i]=ans[i-1]+nums[i];
        }
        int count=0;

        for(int i=1;i<nums.size();i++){
            long long diff=(ans[n-1]-ans[i-1]);

            if(ans[i-1]>=diff) count++;
        }
        return count;
        
    }
};