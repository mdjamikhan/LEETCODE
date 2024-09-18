class Solution {
public:
    vector<int> findOrder(int num, vector<vector<int>>& pre) {
        vector<vector<int>> adj(num);
        for(int i=0;i<pre.size();i++)
        {
            int u=pre[i][1];
            int v=pre[i][0];
            adj[u].push_back(v);

        }
        vector<int>indeg(num,0);
        for(int i=0;i<num;i++)
        {
            for(auto it:adj[i]){
                indeg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<num;i++)
        {
            if(indeg[i]==0){
                q.push(i);
            }
        }
        vector<int>ans;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto it:adj[node]){
                indeg[it]--;
                if(indeg[it]==0){
                    q.push(it);
                }
            }

        }
        if(ans.size()==num)  return ans;
        return {};
       
        
    }
};