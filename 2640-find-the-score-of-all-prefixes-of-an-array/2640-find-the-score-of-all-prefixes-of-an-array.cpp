class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        vector<long long>sum(nums.size());
        int maxi=0;
        long long prev=0;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            long long k=maxi+nums[i];
            sum[i]=maxi+nums[i]+prev;
            prev=sum[i];
        }
        return sum;
        
    }
};