class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i= 1;
        int n=nums.size();
        if(n==1) return nums[0];
        while(i<n){
            if(nums[i]==nums[i-1]){
                i+=3;
            }
            else{
                if(nums[i]!=nums[i-1]){
                    return nums[i-1];
                }
            }
        }
        return nums[n-1];
    

        
    }
};