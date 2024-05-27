class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        int res=0;
        for(int i=1;i<=nums.size()-1;i++)
        {
            if(nums[i]==nums[i-1]){
                ans.push_back(nums[i]);
            }
        }
        for(int i=0;i<ans.size();i++)
        {
            res^=ans[i];
        }
        return res;
        
    }
};