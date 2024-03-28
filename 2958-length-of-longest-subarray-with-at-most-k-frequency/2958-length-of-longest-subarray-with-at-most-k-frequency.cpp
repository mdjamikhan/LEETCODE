class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int i=0;
        int j=0;
        int n=nums.size();
        int maxi=0;
        unordered_map<int,int> ans;
        while(i<n && j<n)
        {
            ans[nums[i]]++;
            while(ans[nums[i]]>k){
                ans[nums[j]]--;
                j++;
                    
            }

            maxi=max(maxi,i-j+1);
            i++;
        }
        return maxi;

        
    }
};