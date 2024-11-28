class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        dis[0][0]=1;
        pq.push({0,{0,0}});
        int deltaR[]={-1,0,1,0};
        int deltaC[]={0,-1,0,1};

        while(!pq.empty()){
            auto it=pq.top();
            int dist=it.first;
            int row=it.second.first;
            int col=it.second.second;
            pq.pop();
            if(row==n-1 && col==m-1) return dist;
            for(int i=0;i<4;i++){
                int nrow=row+deltaR[i];
                int ncol=col+deltaC[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m){
                    int newDist = dist + grid[nrow][ncol];
                    if(dis[nrow][ncol]>newDist){
                        dis[nrow][ncol]=newDist;
                        pq.push({dis[nrow][ncol],{nrow,ncol}});
                    }
                    // }
                    // else if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && grid[nrow][ncol]==0){
                    //     pq.push({dist,{nrow,ncol}});
                    // }
                }
            }

        }
        return 0;


        
    }
};