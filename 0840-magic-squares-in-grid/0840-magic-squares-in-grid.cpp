class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        // Check every possible 3x3 subgrid
        for(int i = 0; i <= n - 3; i++) {
            for(int j = 0; j <= m - 3; j++) {
                if (isMagic(grid, i, j)) {
                    count++;
                }
            }
        }
        return count;
    }

    bool isMagic(vector<vector<int>>& grid, int row, int col) {
        vector<int> nums(10, 0);

        // Check if numbers 1-9 are present exactly once
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                int num = grid[row + i][col + j];
                if (num < 1 || num > 9 || nums[num]++ > 0) {
                    return false;
                }
            }
        }

        // Check the sum of rows, columns, and diagonals
        int sum = grid[row][col] + grid[row][col + 1] + grid[row][col + 2];
        for(int i = 0; i < 3; i++) {
            if ((grid[row + i][col] + grid[row + i][col + 1] + grid[row + i][col + 2] != sum) || 
                (grid[row][col + i] + grid[row + 1][col + i] + grid[row + 2][col + i] != sum)) {
                return false;
            }
        }
        if (grid[row][col] + grid[row + 1][col + 1] + grid[row + 2][col + 2] != sum ||
            grid[row][col + 2] + grid[row + 1][col + 1] + grid[row + 2][col] != sum) {
            return false;
        }

        return true;
    }
};
