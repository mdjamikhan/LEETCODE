class Solution {
public:
    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        int n = robot.size();
        int m = factory.size();
        sort(begin(robot), end(robot));
        sort(begin(factory), end(factory)); // Sort factories by their position
        vector<vector<long long>> dp(n + 1, vector<long long>(m + 1, LLONG_MAX/10)); // Initialize dp with max values

        // Base case: 0 robots, 0 factories means 0 distance
        for (int j = 0; j <= m; j++) {
            dp[0][j] = 0;
        }

        // Fill the dp table
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) { // Change 'J' to 'j'
                int lim = factory[j - 1][1]; // Get the limit of robots for the j-th factory
                long long totalDistance = 0; // Reset total distance for this factory

                // Consider taking k robots from the factory j
                for (int k = 0; k <= lim && k < i; k++) {
                    totalDistance += abs(robot[i - k - 1] - factory[j - 1][0]); // Calculate the distance
                    dp[i][j] = min(dp[i][j], dp[i - k - 1][j - 1] + totalDistance); // Update dp table
                }
            }
        }

        long long ans = LLONG_MAX;
        // Find the minimum distance using any number of factories
        for (int j = 1; j <= m; j++) {
            ans = min(ans, dp[n][j]);
        }
        
        return ans; // Return the minimum total distance
    }
};
