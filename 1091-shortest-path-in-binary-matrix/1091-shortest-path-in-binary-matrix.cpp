class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if(grid[0][0]==1 || grid[n-1][m-1]==1) return -1;
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q; // Corrected
        
       // vector<vector<int>> des(n, vector<int>(m, INT_MAX));

        int deltaRow[] = {-1, 0, 1, 0, -1, -1, 1, 1};
        int deltaCol[] = {0, 1, 0, -1, -1, 1, -1, 1};
        vector<vector<int>>vis(n,vector<int>(m,0));

        //des[0][0] = 0;
        vis[0][0]=1;
        
        q.push({0, {0, 0}}); 

        while (!q.empty()) {
            auto it = q.top();
            int dist = it.first; 
            int row = it.second.first;
            int col = it.second.second; 
            q.pop();

            if (row == n - 1 && col == m - 1) return dist+1;

            for (int i = 0; i < 8; i++) {
                int nrow = row + deltaRow[i];
                int ncol = col + deltaCol[i];
                
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m  && !vis[nrow][ncol] && grid[nrow][ncol] == 0) {

                    //if (dist + 1 < des[nrow][ncol]) {
                       // des[nrow][ncol] = dist + 1;
                        vis[nrow][ncol]=1;
                        q.push({dist+1, {nrow, ncol}});
                   // }
                }
            }
        }
        return -1;
    }
};
