class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for (int x = 0; x <= n; ++x) {
            // We need to find the number of elements that are >= x.
            // This is equivalent to finding the position of the first element that is >= x.
            auto it = lower_bound(nums.begin(), nums.end(), x);
            int count = nums.end() - it; // number of elements >= x
            
            if (count == x) {
                return x;
            }
        }
        
        return -1;
        
    }
};