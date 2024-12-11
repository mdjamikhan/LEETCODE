class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                ans.push_back(nums[(i+nums[i])%n]);
            }
            else if(nums[i]<0){
                int k=(n+(i+nums[i])%n)%n;
                ans.push_back(nums[k]);
 
            }
            else if(nums[i]==0){
                ans.push_back(nums[i]);
            }

        }
        return ans;
    }
};