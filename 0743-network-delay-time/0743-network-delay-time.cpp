class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>edge(n+1);
        for(auto it:times){
            int u=it[0];
            int v=it[1];
            int wt=it[2];
            edge[u].push_back({v,wt});

        }
        vector<int>des(n+1,1e9);
        des[k]=0;
        queue<pair<int,int>>q;
        // priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
        q.push({k,0});
        while(!q.empty()){
            int node=q.front().first;
            int dist=q.front().second;
            q.pop();
           
            for(auto it:edge[node]){
                int neigh=it.first;
                int wt=it.second;
                if(des[neigh]>dist+wt){
                    des[neigh]= dist+wt;
                    q.push({neigh,des[neigh]});
                }
            }
        }
        int maxi=0;

        for(int i=1;i<=n;i++){
            cout<<des[i]<<" ";
            if(des[i]==1e9) return -1;
           maxi= max(maxi,des[i]);
        }
        return maxi;
        
    }
};