class Solution {
public:
    int minPatches(vector<int>& nums, int n) {
        int count=0;
        int m=nums.size();
        int sum=0;
        int i=0;
        while(sum<n ){
            if(i<m && nums[i]<=sum+1){
                sum+=nums[i];
                i++;
            }
            else {
                sum+=(sum+1);
                count++;
            }
        }
        return count;
   
    }
};