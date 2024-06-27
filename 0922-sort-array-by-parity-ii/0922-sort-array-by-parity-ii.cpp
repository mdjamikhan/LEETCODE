class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>even,odd;

        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0 ){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        int l1=0,l2=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0){
                nums[i]=even[l1++];
            }
            else{
                nums[i]=odd[l2++];
            }
        }
        return nums;
        
    }
};