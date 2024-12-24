class Solution {
public:

void dis(int node,int par,int dist,vector<vector<int>>&adj,pair<int,int>&res){
    if(dist>res.first){
        res={dist,node};
    }
    for(auto it:adj[node]){
        if(it!=par){
            dis(it,node,dist+1,adj,res);
        }
    }
}
    
    int minimumDiameterAfterMerge(vector<vector<int>>& edges1, vector<vector<int>>& edges2) {
        int n=edges1.size();
        int m=edges2.size();

        vector<vector<int>> adj1(n+1), adj2(m+1);

        for (auto& it : edges1) {
            int u = it[0];
            int v = it[1];
            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }

        for (auto& it : edges2) {
            int u = it[0];
            int v = it[1];
            adj2[u].push_back(v);
            adj2[v].push_back(u);
        }
        pair<int,int>res1={INT_MIN,-1},res2={INT_MIN,-1};
        dis(0,-1,0,adj1,res1);
        dis(res1.second,-1,0,adj1,res2);
        int dia=res2.first;

        res1={INT_MIN,-1},res2={INT_MIN,-1};
        dis(0,-1,0,adj2,res1);
        dis(res1.second,-1,0,adj2,res2);
        int dia2=res2.first;

        return max({dia,dia2,(dia+1)/2+(dia2+1)/2+1});


       
    }
};
