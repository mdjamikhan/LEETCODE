class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        unordered_map<int,int>mp;
        long long count=0;
        int i=0;
        int j=0;
        while(i<nums.size()){
           

            while(j<nums.size() && abs(nums[i]-nums[j])<=2)
            {
                mp[nums[j]]++;
                j++;

            }
            count+=(j-i);
            mp[nums[i]]--;
            
            if(mp[nums[i]]==0){
                mp.erase(nums[i]);
            }
            i++;
        }
        return count;
    }
};