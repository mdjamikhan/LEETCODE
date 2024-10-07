class Solution {
public:
void dfs(int start,vector<vector<int>>&adj,vector<int>&vis){
    vis[start]=1;
    for(auto it:adj[start]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& inv) {
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(auto it:inv){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
           // adj[v].push_back(u);
        }
        dfs(k,adj,vis);
        int  invok=1;

        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
                for(auto it:adj[i]){
                    if(vis[it]) invok=0;
                }
            }
        }

        vector<int>ans;
        if(invok){
            for(int i=0;i<n;i++){
                if(!vis[i]) ans.push_back(i);
            }
        }
        else{
            for(int i=0;i<n;i++){
                ans.push_back(i);
            }

        }
        return ans;
        




        
    }
};