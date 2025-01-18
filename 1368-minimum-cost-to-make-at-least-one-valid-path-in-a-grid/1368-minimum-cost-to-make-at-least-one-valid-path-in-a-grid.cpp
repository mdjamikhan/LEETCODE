class Solution {
public:
  vector<vector<int>> dirs = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    int minCost(vector<vector<int>>& grid) {
        int numRows = grid.size(), numCols = grid[0].size();
       priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;
    //    priority_queue<vector<int>, vector<vector<int>>, greater<>> pq;
        // pq.push({0, 0, 0});

        
      
       pq.push({0,{0,0}});

        vector<vector<int>> dis(numRows, vector<int>(numCols, INT_MAX));
        dis[0][0] = 0;
        // int deltaR[]={-1,0,1,0};
        // int deltaC[]={0,1,0,-1}; // it will not work waste 30 min more time

        while (!pq.empty()) {
            auto curr = pq.top();
            pq.pop();
            int cost = curr.first, row = curr.second.first, col = curr.second.second;

          
            if (dis[row][col] != cost) continue;

            for (int i = 0; i < 4; i++) {
                int nrow = row + dirs[i][0];
                int ncol = col + dirs[i][1];

                if (nrow >= 0 && nrow < numRows && ncol >= 0 &&
                    ncol < numCols) {
                    int newCost = cost + (i != (grid[row][col] - 1) ? 1 : 0);

                    if (dis[nrow][ncol] > newCost) {
                        dis[nrow][ncol] = newCost;
                        pq.push({newCost, {nrow, ncol}});
                    }
                }
            }
        }

        return dis[numRows - 1][numCols - 1];
    }
};