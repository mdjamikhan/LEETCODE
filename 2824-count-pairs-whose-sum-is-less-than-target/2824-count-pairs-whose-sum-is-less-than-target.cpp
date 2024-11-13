class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int count=0;
       
            int low=0;
            int high=nums.size()-1;

            while(low<=high){
               
                if(nums[low]+nums[high]<target){
                    low++;
                    count+=(high-low+1);
            
                }
                else{
                    high--;
                }
            }
        
        return count;
        
    }
};