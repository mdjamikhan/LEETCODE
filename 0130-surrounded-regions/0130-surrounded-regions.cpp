class Solution {
public:
void dfs(int i,int j,vector<vector<int>>&vis,vector<vector<char>>& board,int n,int m,int delRow[],int delCol[]){
  

    vis[i][j]=1;

    for(int k=0;k<4;k++)
    {
        int nrow=i+delRow[k];
        int ncol=j+delCol[k];
        if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && !vis[nrow][ncol] && board[nrow][ncol]=='O'){
            dfs(nrow,ncol,vis,board,n,m,delRow,delCol);
        }    
    }
   

    

}
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m= board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        for(int j=0;j<m;j++)
        {
            if(board[0][j]=='O' && !vis[0][j]) dfs(0,j,vis,board,n,m,delRow,delCol);

            if(board[n-1][j]=='O' && !vis[n-1][j])  dfs(n-1,j,vis,board,n,m,delRow,delCol);
        }
        for(int i=0;i<n;i++)
        {
            if(board[i][0]=='O' && !vis[i][0]) dfs(i,0,vis,board,n,m,delRow,delCol);
            if(board[i][m-1]=='O' && !vis[i][m-1]) dfs(i,m-1,vis,board,n,m,delRow,delCol);
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                   // vis[i][j]=1;
                }

            }
        }
        
        
        
    }
};