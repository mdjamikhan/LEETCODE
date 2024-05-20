#include <vector>
#include <numeric>

class Solution {
public:
    int subsetXORSum(std::vector<int>& nums) {
        int totalSum = 0;        
        // Each element in nums will appear in 2^(n-1) subsets
        for (int num : nums) {
            totalSum |= num;
        }        
        // The total sum of all subset XORs is totalSum * 2^(n-1)
        return totalSum * (1 << (nums.size() - 1));
    }
};
