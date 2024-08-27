class Solution {
public:
    const int N = 1e4+5;
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<pair<double,int>>adj[N];
        priority_queue<pair<double,int>>pq;
        int size=edges.size();
        for(int i=0;i<size;i++)
        {
            int u=edges[i][0];
            int v=edges[i][1];
            double succ=succProb[i];
            adj[u].push_back({succ,v});
            adj[v].push_back({succ,u});
        }
        double prob=1.0;
        vector<double>pro(N);
        pro[start]=1.0;

        pq.push({prob,start});
        while(!pq.empty()){
            auto [cost,node]=pq.top();
            pq.pop();
            if(node==end) return cost;

            for(auto [ccost,cnode]:adj[node]){

                double newcost=cost*ccost;
                if(newcost>pro[cnode]){
                    pro[cnode]=newcost;
                    pq.push({newcost,cnode});
                }
            }
        }
        return 0.0;



        
    }
};