class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int val=0;
        int  j=0;
        for(int it:nums){
            int val=it;
            if(j==0 || j==1 || nums[j-2]!=val){
                nums[j]=val;
                j++;
            }
        }
        return j;

           
    
        
    }
};