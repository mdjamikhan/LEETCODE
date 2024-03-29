#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long count = 0;
        int n = nums.size();
        long long take = 0;
        int ele = *max_element(nums.begin(), nums.end());
        int i = 0;
        int j = 0;
        while (i < n) {
            if (nums[i] == ele) {
                count++;
                while (count >= k && j <= i) {
                    take += n - i; 
                    if (nums[j] == ele)
                        count--;
                    j++;
                }
            }
            i++;
        }
        return take;
    }
};
