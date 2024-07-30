class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int sum1=0;
        int sum2=0;
        for(int i=0;i<nums.size();i++)
        {
            int k=nums[i]/10;

            if(k>=1){
                sum1+=nums[i];
            }
            else if(k<1){
                sum2+=nums[i];
            }

        }
        if(sum1!=sum2) return true;
        return false;

        
    }
};