class Solution {
public:
void dfs(int node,vector<int>adj[], vector<int>&vis){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis);
        }
    }
}
    int findCircleNum(vector<vector<int>>& isc) {
        int n=isc.size();
        vector<int>adj[n];
   
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            {
                if(isc[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
                dfs(i,adj,vis);
                count++;
            }

        }
        return count;
        
    }
};