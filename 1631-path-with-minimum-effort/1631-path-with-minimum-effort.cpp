class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n=h.size();
        int m=h[0].size();
        vector<vector<int>>des(n,vector<int>(m,INT_MAX));
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> q;
 
       
        q.push({0,{0,0}});
        des[0][0]=0;
        int deltaRow[]={-1,0,1,0};
        int deltaCol[]={0,1,0,-1};
        while(!q.empty()){
            auto it=q.top();
            int dis=it.first;
            int row=it.second.first;
            int col=it.second.second;
            q.pop();
            if(row==n-1 && col==m-1) return des[row][col];

            for(int i=0;i<4;i++)
            {
                int nrow=row+deltaRow[i];
                int ncol=col+deltaCol[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m ){
                    int path=max(dis,abs(h[row][col]-h[nrow][ncol]));
                    if(path<des[nrow][ncol]){
                        des[nrow][ncol]=path;
                        q.push({des[nrow][ncol],{nrow,ncol}});
                       

                    }


                        
                    
                    
                }
            }
        }
        return 0;
        

    }
};