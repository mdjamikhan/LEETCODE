class Solution {
public:
    int minOperations(vector<int>& nums) {
        
        int n=nums.size();
        int one=1;
       
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=one){
                count++;
                one=!one;
                cout<<one;
            }

        }
        return count;
       
       
    }
};