class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxi=*max_element(nums.begin(),nums.end());
        int j=0;
        int maxiCount=1;
        for(int i=0;i<nums.size();i++)
        {
            
            if(maxi==nums[i]){
                j++;
                
            }
            else{
                j=0;
            }
            maxiCount=max(maxiCount,j);
        }
        return  maxiCount;
        
    }
};