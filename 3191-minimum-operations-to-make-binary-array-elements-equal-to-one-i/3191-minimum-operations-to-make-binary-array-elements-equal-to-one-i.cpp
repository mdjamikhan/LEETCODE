class Solution {
public:
    int minOperations(vector<int>& nums) {

        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0 && i+2<n) {
                nums[i]=1;

                nums[i+1]=(nums[i+1]==1)? 0:1;
                nums[i+2]=(nums[i+2]==1)?0:1;
                count++;
            }



        }
        int sum=accumulate(nums.begin(),nums.end(),0);
        cout<<sum;

        if(nums.size()==sum) return count;
        return -1;
        
    }
};