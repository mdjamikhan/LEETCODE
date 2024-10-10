class Solution {
public:
void dfs(int i,int n,vector<vector<int>>&graph,vector<vector<int>>&ans,vector<int>take,vector<int>&vis)
{
    take.push_back(i);
    if(i==n){
        ans.push_back(take);
        return;
    }
    for(auto it:graph[i]){
        if(!vis[it]){
            vis[it]=1;
            dfs(it,n,graph,ans,take,vis);
            vis[it]=0;
        }
    }
}
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n=graph.size();
        int m=graph.size();
        vector<vector<int>>ans;
        vector<int>take;
        vector<int>vis(n,0);
        dfs(0,n-1,graph,ans,take,vis);
        return ans;
        
    }
};