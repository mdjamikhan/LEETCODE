class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size();
        int sum = 0;
        
        for(int i = 0; i < n; i++) {
            sum += nums[i];
        }
        
        if (sum % p == 0) return 0;
        
        int rem = sum % p; 
        unordered_map<int, int> mp;
        mp[0] = -1; 
        int newSum = 0;
        int mini = n;  

        for (int i = 0; i < n; i++) {
            newSum = (newSum + nums[i]) % p;
            
            int target = (newSum - rem + p) % p;
            
            if (mp.find(target) != mp.end()) {
                mini = min(mini, i - mp[target]);
            }

            mp[newSum] = i;
        }
        
        return (mini == n) ? -1 : mini;
    }
};
