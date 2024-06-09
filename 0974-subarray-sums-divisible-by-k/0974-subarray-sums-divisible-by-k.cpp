class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum%k==0) count++;
            }
            sum=0;
        }
        return count;
        
    }
};