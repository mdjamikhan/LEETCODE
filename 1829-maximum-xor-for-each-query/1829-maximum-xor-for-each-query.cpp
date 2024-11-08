class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int maxi=(1<<maximumBit)-1;
        vector<int>ans;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum^=nums[i];

            ans.push_back(sum^maxi);

        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};