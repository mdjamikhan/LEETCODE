class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int mul) {
        vector<int> ans;
        int index=-1;
        for(int i=0;i<k;i++)
        {
            int mini=INT_MAX;
            for(int j=0;j<nums.size();j++){
                if(mini>nums[j]){
                    mini=nums[j];
                    index=j;
                }
           }
           nums[index]=nums[index]*mul;
        }
        return nums;
        
    }
};