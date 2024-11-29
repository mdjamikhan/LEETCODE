class Solution {
public:
    int minimumTime(vector<vector<int>>& grid) {
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> pq;
        pq.push({0, {0, 0}});
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][1]>1 && grid[1][0]>1) return -1;
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        vector<vector<int>>vis(n,vector<int>(m,0));
        dis[0][0]=0;
        vis[0][0]=1;
        int deltaR[]={-1,0,1,0};
        int deltaC[]={0,1,0,-1};

        while(!pq.empty()){
            int time=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();
            if(row==n-1 && col==m-1) return time;

            for(int i=0;i<4;i++){
                int nrow=row+deltaR[i];
                int ncol=col+deltaC[i];
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol]){
                    int waitTime = ((grid[nrow][ncol]-time)%2==0)?1:0;
                    int nextTime=max(time+1,grid[nrow][ncol]+waitTime);
                    pq.push({nextTime,{nrow,ncol}});
                    vis[nrow][ncol]=1;
                    
                    

                }
            }
        }
        return -1;
        
    }
};