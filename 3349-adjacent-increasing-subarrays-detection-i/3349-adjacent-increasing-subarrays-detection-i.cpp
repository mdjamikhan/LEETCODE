class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2 * k)
            return false;

  

        for (int i = 0; i <= n - 2 * k; i++) {

            bool flag = true, flag2 = true;
            for (int j = i; j < i + k - 1; j++) {
                if (nums[j] >= nums[j + 1]) {
                    flag = false;
                    break;
                }
            }

            if (flag) {
                for (int l = i + k; l < i + 2 * k - 1; l++) {
                    if (nums[l] >= nums[l + 1]) {
                        flag2 = false;
                        break;
                    }
                }
            if (flag2)
                return true;
            }
        }
        return false;
    }
};