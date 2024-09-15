class Solution {
public:
bool bfs(int start,vector<vector<int>>& graph,vector<int>& color){
    color[start]=0;
    queue<int>q;
    q.push(start);
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it:graph[node]){
            if(color[it]==-1){
                color[it]=!color[node];
                q.push(it);
            }
            if(color[it]==color[node]) return false;
        }
    }
    return true;
}
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
       // int m=graph[0].size();

       vector<int>color(n,-1);
        for(int i=0;i<n;i++){
                if(color[i]==-1){
                    if(bfs(i,graph,color)==false) return false;
                }
        }
        return true;

        
    }
};