class Solution {
public:
int one(int n) {
    int count = 0;
    while(n != 0) {
        count += n & 1;  
        n >>= 1;         
    }
    return count;
}


    bool canSortArray(vector<int>& nums) {

        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-i-1;j++){
                int first=one(nums[j]);
                int second=one(nums[j+1]);
                if(first==second && nums[j]>nums[j+1]){
                    swap(nums[j],nums[j+1]);
                }
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])return false;
        }
        return true;
        




    }
};