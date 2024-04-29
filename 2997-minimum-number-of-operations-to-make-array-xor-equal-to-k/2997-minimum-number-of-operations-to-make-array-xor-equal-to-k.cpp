class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        for(int p:nums)
        {
            k^=p;
        }
        return __builtin_popcount(k);
        
    }
};