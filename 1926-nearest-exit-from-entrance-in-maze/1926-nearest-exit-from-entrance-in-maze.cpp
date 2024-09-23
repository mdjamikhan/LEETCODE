class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        int n=maze.size();
        int m=maze[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>>q;
        int i=entrance[0];
        int j=entrance[1];
        int maxi=INT_MAX;
        q.push({{i,j},0});
        vis[i][j]=1;
        int deltaRow[]={-1,0,1,0};
        int deltaCol[]={0,-1,0,1};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            if((row==0 || row==n-1) || (col==0 || col==m-1) &&( dis!=0)) maxi=min(maxi,dis);
            for(int i=0;i<4;i++){
                int nrow=row+deltaRow[i];
                int ncol=col+deltaCol[i];
                if(nrow>=0 &&nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && maze[nrow][ncol]=='.' ){
                    q.push({{nrow,ncol},dis+1});
                    vis[nrow][ncol]=1;
                }
               
            }
        }
        if(maxi==0) return -1;
        return maxi;
       
    }
};