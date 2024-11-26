class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=nums[0];
        int maxichecker=nums[0];
        for(int i=1;i<nums.size();i++){
            maxichecker=max(maxichecker+nums[i],nums[i]);
            maxi=max(maxi,maxichecker);
        }
        int totalSum=accumulate(nums.begin(),nums.end(),0);
        int mini=nums[0];
        int miniChecker=nums[0];
        for(int i=1;i<nums.size();i++){
            miniChecker=min(miniChecker+nums[i],nums[i]);
            mini=min(mini,miniChecker);
        }
        int circular=totalSum-mini;
        if(circular==0) return maxi;
        return max(maxi,circular);
        
    }
};