class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int count = 0;
        // submatrix is sum of sum over both row and col

        for (int i = 0; i < n; i++) {
            vector<int> newColSum(m,0);
            for (int row = i; row < n; row++) {
                for (int col = 0; col < m; col++) {
                    newColSum[col] += matrix[row][col];
                }
            
                int sum = 0;
                unordered_map<int, int> mp;
                mp[0] = 1;
                for (int j = 0; j < m; j++) {
                    sum += newColSum[j];
                    if (mp.find(sum - target) != mp.end()) {
                        count += mp[sum - target];
                    }
                    mp[sum]++;
                }
            }
        }
        return count;
    }
};