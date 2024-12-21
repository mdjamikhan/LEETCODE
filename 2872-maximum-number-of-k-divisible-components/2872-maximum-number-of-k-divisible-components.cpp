class Solution {
public:
    int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
        if(n<2) return 1;
        vector<int>vis(values.size(),0);
        vector<vector<int>>adj(n);
        vector<int>indeg(n,0);
        vector<long long>nodes(values.begin(),values.end());
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
            indeg[it[0]]++;
            indeg[it[1]]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(indeg[i]==1) q.push(i);
        }
        int ans=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            long long add=(nodes[node]%k==0)?0:nodes[node];
            if(add==0) ans++;

            for(auto it:adj[node]){

                if(indeg[it]>0){
                    indeg[it]--;
                    nodes[it]+=add;
                    if(indeg[it]==1) q.push(it);
                }
                
            }
        }
        return ans;


        
    }
};