class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorr=0;
        for(int i=0;i<nums.size();i++){
            xorr^=nums[i];
        }
        int rightmost=xorr& ~(xorr-1);
        int b1=0;
        int b2=0;
        for(int it:nums){
            if(it&rightmost){
                b1^=it;

            }
            else{
                b2^=it;
            }
        }
        return {b1,b2};

        
    }
};