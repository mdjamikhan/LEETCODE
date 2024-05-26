class Solution {
public:
    const long long mod = 1e9+7;

    long long solve(int l, int Abs, int pre, int n, vector<vector<vector<long long>>>& dp) {
        if (pre == 0) return 1;  // Base case: if no more days to process, there's exactly one valid sequence
        if (l >= 3 || Abs >= 2) return 0;  // Invalid sequences
        if (dp[l][Abs][pre] != -1) return dp[l][Abs][pre];

        long long ans = solve(0, Abs, pre - 1, n, dp);  // Adding a 'P'
        if (l < 2) ans = (ans + solve(l + 1, Abs, pre - 1, n, dp)) % mod;  // Adding an 'L'
        if (Abs < 1) ans = (ans + solve(0, Abs + 1, pre - 1, n, dp)) % mod;  // Adding an 'A'

        return dp[l][Abs][pre] = ans % mod;
    }

    int checkRecord(int n) {
        // Initialize the dp array with -1
        vector<vector<vector<long long>>> dp(3, vector<vector<long long>>(2, vector<long long>(n + 1, -1)));
        return solve(0, 0, n, n, dp);
    }
};
