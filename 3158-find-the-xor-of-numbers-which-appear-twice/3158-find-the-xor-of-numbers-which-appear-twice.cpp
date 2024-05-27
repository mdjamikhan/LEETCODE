class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=1;i<=nums.size()-1;i++)
        {
            if(nums[i]==nums[i-1]){
                res^=nums[i];
            }
        }
        return res;
        
    }
};