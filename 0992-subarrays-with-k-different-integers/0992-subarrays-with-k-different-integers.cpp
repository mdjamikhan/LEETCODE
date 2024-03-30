class Solution {
public:
int solve(vector<int>&nums,int k)
{
    int n=nums.size();
    int i=0;
    int j=0;
    int count=0;
    unordered_map<int,int> mp;
    while(i<n)
    {
        mp[nums[i]]++;
        while(mp.size()>k && i>=j)
        {
            mp[nums[j]]--;
            if(mp[nums[j]]==0){
                mp.erase(nums[j]);   
            }
            j++;
        }
        count+=(i-j+1);
        i++;
    }
    return count;
}

    int subarraysWithKDistinct(vector<int>& nums, int k) {
  
        return solve(nums,k)-solve(nums,k-1);

        
    }
};