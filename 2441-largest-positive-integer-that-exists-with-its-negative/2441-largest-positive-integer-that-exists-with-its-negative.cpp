class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int k=-1;
        int j=nums.size()-1;
        while(i<j)
        {
            if(nums[i]==(-1)*nums[j])
            {
                k=nums[j];
                break;
            }
            else if((-1)*nums[i]<nums[j])
            {
                j--;
            }
            else if((-1)*nums[i]>nums[j]){
               i++;
               
            }
        }
        return k;
        
    }
};