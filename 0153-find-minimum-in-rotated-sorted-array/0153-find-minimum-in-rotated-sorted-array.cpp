class Solution {
public:
    int findMin(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        if(nums[low]<nums[high]) return nums[low];
        while(low<high-1){
            int mid=low+(high-low)/2;

            if(nums[mid]>nums[high]){
                low=mid+1;
            }  
            else if(nums[mid]<nums[high]){
                high=mid;
            }
        }
        return nums[low];
        
    }
};