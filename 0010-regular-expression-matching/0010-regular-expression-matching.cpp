class Solution {
public:
    int solve(int i, int j, string s, string p, vector<vector<int>>& dp) {
        if (i < 0 && j < 0)
            return true; // Both strings are fully matched
        if (j < 0)
            return false; // If pattern is exhausted but string is not

        if (i < 0) {
            // If string is exhausted, check if the remaining pattern can match
            // an empty string
            if (p[j] == '*')
                return solve(i, j - 2, s, p, dp);
            return false;
        }

        if (dp[i][j] != -1) return dp[i][j];



        if (s[i] == p[j] || p[j] == '.') return dp[i][j] = solve(i - 1, j - 1, s, p, dp);
        

        if (p[j] == '*') {
            // use to match  in occurence;
            if (solve(i, j - 2, s, p,dp)) { // Case 1: '*' matches zero occurrences
                return dp[i][j] = true;
            }
            if (s[i] == p[j - 1] || p[j - 1] == '.') {
                // Case 2: '*' matches one or more occurrences
                return dp[i][j] = solve(i - 1, j, s, p, dp);
            }
        }

        return dp[i][j] = false; // No match found
    }

    bool isMatch(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<vector<int>> dp(n, vector<int>(m, -1));
        return solve(n - 1, m - 1, s, p, dp);
    }
};
