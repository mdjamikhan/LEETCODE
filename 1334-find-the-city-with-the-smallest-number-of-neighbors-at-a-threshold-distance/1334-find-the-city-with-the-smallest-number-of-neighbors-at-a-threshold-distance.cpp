class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {


        vector<vector<int>>dp(n,vector<int>(n,INT_MAX));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=0;
        }
        for(auto &edge:edges){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            dp[u][v]=w;
            dp[v][u]=w;
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(dp[i][k]!=INT_MAX && dp[k][j]!=INT_MAX){
                        dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
                    }
                }
            }
        }
        int mindis=INT_MAX;
        int best=-1;
        for(int i=0;i<n;i++)
        {
            int reach=0;
            for(int j=0;j<n;j++)
            {
                if(dp[i][j]<=distanceThreshold){
                    //mindis=distanceThreshold;
                    reach++;
                }
            }
            if(reach<=mindis){
                mindis=reach;
                best=i;
            }
        }
        return best;
        
    }
};