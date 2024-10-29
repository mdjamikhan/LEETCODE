class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, -1)); 
        queue<pair<int, pair<int, int>>> q;

        for (int i = 0; i < n; i++) {
            q.push({0, {i, 0}});
            vis[i][0] = 1; 
        }

        int deltaR[] = {-1, 0, 1}; 
        int deltaC[] = {1, 1, 1}; 
        int maxi = 0; 

        while (!q.empty()) {
            int move = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();

            maxi = max(maxi, move);

            for (int i = 0; i < 3; i++) {
                int nrow = row + deltaR[i];
                int ncol = col + deltaC[i];

                if (nrow >= 0 && ncol >= 0 && nrow < n && ncol < m && vis[nrow][ncol] == -1) {
                    if (grid[row][col] < grid[nrow][ncol]) {
                        q.push({move + 1, {nrow, ncol}});
                        vis[nrow][ncol] = 1;
                    }
                }
            }
        }
        
        return maxi;
    }
};
