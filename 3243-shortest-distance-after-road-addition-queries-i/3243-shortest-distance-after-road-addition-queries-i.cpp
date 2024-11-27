class Solution {
public:
int bfs(int start,int end,int n,vector<vector<int>>graph){
    queue<int>pq;
    vector<int>dist(n,INT_MAX);
    pq.push(start);
    dist[start]=0;
    while(!pq.empty()){
        int node=pq.front();
        pq.pop();

        for(int it:graph[node]){
            
            if(dist[it]>dist[node]+1){
                dist[it]=dist[node]+1;
                pq.push(it);
            }
        }
    }
    return dist[end];

}
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& que) {

        vector<vector<int>>adj(n);
        vector<int>ans;
        for(int i=0;i<n-1;i++){
            adj[i].push_back(i+1);
        }
        for(auto it:que){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            ans.push_back(bfs(0,n-1,n,adj));
        }
        return ans;
        
    }
};