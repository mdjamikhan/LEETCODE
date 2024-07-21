class Solution {
public:
vector<int>topo(vector<vector<int>>&row,int &k){
    vector<vector<int>>adj(k+1);
    vector<int>indegree(k+1);
    for(vector<int>& it:row){
        int u=it[0];
        int v=it[1];
        adj[u].push_back(v);
        indegree[v]++;

    }
    queue<int>q;
    int count=0;
    vector<int>order;
    for(int i=1;i<=k;i++)
    {
        if(indegree[i]==0){
            q.push(i);
            count++;
        }
    }
    while(!q.empty()){
        int take=q.front();
        order.push_back(take);
        q.pop();
        for(int &v:adj[take]){
            indegree[v]--;
            if(indegree[v]==0){
                q.push(v);
                count++;
            }

        }
    }
    if(count!=k) return {};
    return order;
}
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& row, vector<vector<int>>& col) {
        vector<int>toprow=topo(row,k);
        vector<int>topcol=topo(col,k);

        if(toprow.empty()|| topcol.empty()) return {};

        vector<vector<int>>ans(k,vector<int>(k,0));
         for(int i=0;i<k;i++)
         {
            for(int j=0;j<k;j++)
            {
                if(toprow[i]==topcol[j]){
                    ans[i][j]=toprow[i];
                }
            }

         }
         return ans;


        
        
    }
};