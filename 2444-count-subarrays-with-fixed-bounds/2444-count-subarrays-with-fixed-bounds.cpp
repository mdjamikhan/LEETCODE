class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int left =-1;
        int right=-1;
        int com=-1;
        long long res=0;
        for(int i=0;i<nums.size();i++)
        {
            if (!(minK <= nums[i] && nums[i] <= maxK)) {
                com = i;
            }
            if(nums[i]==minK){
                left=i;
            }
            if(nums[i]==maxK){
                right=i;
            }
            res+=max(0,min(left,right)-com);

        }
        return res;
    }
};