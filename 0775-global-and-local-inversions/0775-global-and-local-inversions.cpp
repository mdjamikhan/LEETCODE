class Solution {
public:
    bool isIdealPermutation(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int count2=0;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1]) count++;
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]>nums[j]) count2++;

            }
        }
        return count==count2;
        
    }
};