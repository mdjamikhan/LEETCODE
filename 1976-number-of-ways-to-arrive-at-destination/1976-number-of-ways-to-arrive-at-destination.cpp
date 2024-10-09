class Solution {
public:
    const long long mod = 1e9 + 7;
    
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<pair<int, int>> adj[n];
        priority_queue<pair<long long, long long>, vector<pair<long long, long long>>, greater<pair<long long, long long>>> pq;

        for(auto it : roads) {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }

        pq.push({0, 0});

        vector<long long> path(n, 0); 
        vector<long long> dis(n, LONG_MAX); 
        
        path[0] = 1;  
        dis[0] = 0;   

        while(!pq.empty()) {
            auto it = pq.top();
            int node = it.second;
            long long dist = it.first;
            pq.pop();

            // Skip if a better distance is already found
            if(dist > dis[node]) continue;

            for(auto tar : adj[node]) {
                int we = tar.second;
                long long neigh = tar.first;

                // If a shorter path is found
                if(dis[neigh] > dist + we) {
                    dis[neigh] = dist + we;   // Update minimum distance
                    path[neigh] = path[node]; // Set path count equal to current node
                    pq.push({dis[neigh],neigh});
                }
                else if(dis[neigh] == dist + we) {
                    path[neigh] = (path[neigh] + path[node]) % mod; 
                }
            }
        }

        return  path[n-1] % mod; 
    }
};
