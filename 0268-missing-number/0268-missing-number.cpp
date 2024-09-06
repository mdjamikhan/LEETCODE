class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<=nums.size();i++)
        {
            sum+=i;
        }
        int sum2=0;
        for(int j=0;j<nums.size();j++)
        {
            sum2+=nums[j];
        }
        int diff=sum-sum2;
        return diff;
        
    }
};