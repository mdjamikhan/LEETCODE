class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long maxi=0;
        int left=0;
        if(nums.size()==1) return (long long)nums[0];
        int n=nums.size();
        long long sum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mp[nums[i]]++;

            if(i>=k){
                sum-=nums[left];
                mp[nums[left]]--;
                left++;
                if(mp[nums[i-k]]==0){
                    mp.erase(nums[i-k]);
                }

            }
            if(i>=k-1 && mp.size()==k){
                maxi=max(maxi,sum);
            }

            
        }
        return maxi;
        
    }
};