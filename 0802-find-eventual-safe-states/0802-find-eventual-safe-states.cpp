class Solution {
public:
bool dfs(int start,vector<vector<int>>& graph, vector<int>&visPath, vector<int>&vis ,stack<int>&st){
    visPath[start]=1;
    vis[start]=1;
    for(auto it:graph[start]){
        if(!vis[it]){
            if(dfs(it,graph,visPath,vis,st)==true){
                return true;
            }
        }
        if(visPath[it]==1){
            return true;
        }
    }
    // jo yaha tak pahuchega wahi  ans me push hoega
    st.push(start);
    visPath[start]=0;
    return false;
}
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int>ans;
        stack<int>st;
        int n=graph.size();
        vector<int>visPath(n,0);
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(!vis[i]){
                dfs(i,graph,visPath,vis,st);
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     if(visPath[i]==0){
        //         ans.push_back(i);
        //     }
        // }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();

        }
        sort(ans.begin(),ans.end());
        
        return ans;
    }
};