class Solution {
public:
    bool dfs(int row, int col, int n, int m, vector<vector<int>>& grid, vector<vector<int>>& vis) {
        // Mark the current cell as visited
        vis[row][col] = 1;
        // If we reached the bottom-right corner, return true
        if (row == n - 1 && col == m - 1) return true;
        
        // Temporarily mark the current cell as 0 to simulate path cutting
        grid[row][col] = 0;

        // Try to move down if possible
        if (row + 1 < n && !vis[row + 1][col] && grid[row + 1][col] == 1) {
            if (dfs(row + 1, col, n, m, grid, vis)) return true;
        }

        // Try to move right if possible
        if (col + 1 < m && !vis[row][col + 1] && grid[row][col + 1] == 1) {
            if (dfs(row, col + 1, n, m, grid, vis)) return true;
        }

        // Backtrack: Restore the current cell (not required if we want to actually cut the path)
        grid[row][col] = 1;

        return false;
    }

    bool isPossibleToCutPath(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        vector<vector<int>> vis(n, vector<int>(m, 0));

        // First DFS to check if there's a path from (0,0) to (n-1,m-1)
        if (dfs(0, 0, n, m, grid, vis)) {
            count++;
        }

        // Reset visited array and try again to see if there is another path
        vis = vector<vector<int>>(n, vector<int>(m, 0));
        
        // A second DFS after the grid has been modified to check if another path exists
        if (dfs(0, 0, n, m, grid, vis)) {
            count++;
        }

        // If there's more than 1 path, return false
        return count <= 1;
    }
};
