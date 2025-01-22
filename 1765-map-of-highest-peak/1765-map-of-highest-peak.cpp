class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& w) {
        int n=w.size();
        int m=w[0].size();
        queue<pair<int,int>>pq;
        vector<vector<int>>ans(n,vector<int>(m,-1));
       

        int deltaR[]={-1,0,1,0};
        int deltaC[]={0,-1,0,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(w[i][j]==1){
                    pq.push({i,j});
                    ans[i][j]=0;

                }
            }
        }
        while(!pq.empty()){
            auto it=pq.front();
            pq.pop();
         
            int row=it.first;
            int col=it.second;

            for(int i=0;i<4;i++){
                int nrow=row+deltaR[i];
                int ncol=col+deltaC[i];
                if(nrow>=0 && ncol>=0 && ncol<m && nrow<n && ans[nrow][ncol]==-1){

                    ans[nrow][ncol]=ans[row][col]+1;
                    pq.push({nrow,ncol});
                   

                }
            }



        }
        return ans;
        
        
    }
};