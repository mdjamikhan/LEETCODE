class Solution {
public:
    vector<int> ans;
    vector<pair<int, int>> mp;

    int solve(int value, vector<int>& mapping) {
        vector<int> store;

        if (value == 0) {
            return mapping[0];
        } else {
            while (value > 0) {
                store.push_back(value % 10);
                value /= 10;
            }
        }

        reverse(store.begin(), store.end());
        int val = 0;

        for (int it : store) {
            val = (val * 10) + mapping[it];
        }

        return val;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int valu = solve(nums[i], mapping);
            mp.push_back({nums[i], valu});
        }

        sort(begin(mp), end(mp), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });

        for (auto it : mp) {
            ans.push_back(it.first);
        }

        return ans;
    }
};
