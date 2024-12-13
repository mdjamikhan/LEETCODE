class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long sum = 0;
        map<int, vector<int>> mp; // Changed to store value and all indices where it occurs

        // Populate the map with values and their indices
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }

        int n = nums.size();
        vector<int> vis(n, 0); // Vector to mark visited indices

        // Process elements in ascending order of their value
        for (auto it : mp) {
            for (auto ind : it.second) { // Iterate over all indices of the current value
                if (!vis[ind]) { // Check if the index is not already visited
                    sum += it.first;
                    vis[ind] = 1; // Mark the current index as visited

                    // Mark neighbors as visited
                    if (ind > 0) vis[ind - 1] = 1;
                    if (ind < n - 1) vis[ind + 1] = 1;
                }
            }
        }

        return sum;
    }
};
