class Solution {
public:
    int minTimeToReach(vector<vector<int>>& move) {

   
        int n=move.size();
        int m=move[0].size();
        
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>q;
       
        vector<vector<int>>dis(n,vector<int>(m,INT_MAX));
        dis[0][0]=0;
        q.push({0,{0,0}});
        int deltaR[]={-1,0,1,0};
        int deltaC[]={0,-1,0,1};
        while(!q.empty()){
            auto it=q.top();
            int dist=it.first;
            int row=it.second.first;
            int col=it.second.second;
            q.pop();
            if(row==n-1 && col==m-1) return dist;
            for(int i=0;i<4;i++)
            {
                int nrow=row+deltaR[i];
                int ncol=col+deltaC[i];
                if(nrow>=0 && ncol>=0 && ncol<m  && nrow<n){

                    int diff=max(dist,move[nrow][ncol])+1;
                    if(diff<dis[nrow][ncol]){

                        dis[nrow][ncol]=diff;
                        q.push({dis[nrow][ncol],{nrow,ncol}});
                    }
                }
            }

        }
        return -1; 


        
    }
};