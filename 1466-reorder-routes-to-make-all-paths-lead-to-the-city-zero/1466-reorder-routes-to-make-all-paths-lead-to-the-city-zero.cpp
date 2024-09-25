class Solution {
public:
    int minReorder(int n, vector<vector<int>>& con) {

        vector<vector<pair<int, int>>> adj(n);
        for(auto &it:con)
        {
            int u=it[0];
            int v=it[1];
            adj[u].push_back({v,1});
            adj[v].push_back({u,0});

        }
        vector<int>vis(n,0);
        int count=0;
        queue<int>q;
        q.push(0);
        vis[0]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto& [neigh,isdata]:adj[node]){
               
                if(!vis[neigh]){
                    vis[neigh]=1;
                    q.push(neigh);
                
                    if(isdata) count++;
                }
                
                
            }

        }
        return count;


        
    }
};