class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
   
            }
        }
        int rowMove[]={-1,0,1,0};
        int colMove[]={0,1,0,-1};
        vector<vector<int>>ans(n,vector<int>(m,0));
        int count=0;
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int ti=q.front().second;
            ans[row][col]=ti;       
            count+=ti;
            q.pop();
           
                for(int i=0;i<4;i++)
                {
                    int nrow=row+rowMove[i];
                    int ncol=col+colMove[i];
                
                    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m &&!vis[nrow][ncol] && mat[nrow][ncol]==1  ){
                        q.push({{nrow,ncol},ti+1});
                        vis[nrow][ncol]=1;
                    }
                }   
        }
        return ans;
        
    }
};