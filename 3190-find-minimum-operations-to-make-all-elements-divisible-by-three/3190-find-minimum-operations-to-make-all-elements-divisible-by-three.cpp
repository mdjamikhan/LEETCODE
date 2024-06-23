class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int count=0;
        for(int i=0;i<nums.size();i++){
            int rem=nums[i]%3;
            if(rem){
                count++;
            }
        }
        return count;
        
    }
};