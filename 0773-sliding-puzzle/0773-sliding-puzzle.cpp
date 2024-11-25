#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& b) {
        // Target configuration
        vector<vector<int>> target = {{1, 2, 3}, {4, 5, 0}};
        
        // Convert board to string for easy comparison
        string start = "";
        string goal = "123450";
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 3; j++) {
                start += (b[i][j] + '0');
            }
        }
        
        // Directions for moving in 4 directions (row, col)
        vector<int> deltaR = {-1, 0, 1, 0};
        vector<int> deltaC = {0, 1, 0, -1};
        
        // BFS setup
        queue<pair<string, int>> q; // {board string, moves}
        unordered_set<string> visited;
        q.push({start, 0});
        visited.insert(start);

        // Perform BFS
        while (!q.empty()) {
            auto [current, moves] = q.front();
            q.pop();

            if (current == goal) return moves; // Reached target
            
            // Find the position of '0'
            int zeroPos = current.find('0');
            int row = zeroPos / 3, col = zeroPos % 3;
            
            // Try all 4 directions
            for (int i = 0; i < 4; i++) {
                int nrow = row + deltaR[i];
                int ncol = col + deltaC[i];
                
                if (nrow >= 0 && nrow < 2 && ncol >= 0 && ncol < 3) {
                    // Calculate new position of '0'
                    int newPos = nrow * 3 + ncol;
                    
                    // Swap '0' with the target position
                    string next = current;
                    swap(next[zeroPos], next[newPos]);
                    
                    if (visited.find(next) == visited.end()) {
                        visited.insert(next);
                        q.push({next, moves + 1});
                    }
                }
            }
        }

        return -1; // If no solution exists
    }
};
