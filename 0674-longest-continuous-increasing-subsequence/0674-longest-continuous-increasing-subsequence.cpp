class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1;
        int maxi=1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]<nums[i+1]){
                count++;
                maxi=max(count,maxi);
            }
            else{
                count=1;
            }

        }
        return maxi;
        
    }
};