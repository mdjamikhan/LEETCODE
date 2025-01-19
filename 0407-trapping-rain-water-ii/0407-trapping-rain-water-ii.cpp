class Solution {
public:
    int trapRainWater(vector<vector<int>>& h) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        
        vector<vector<int>>vis(h.size(),vector<int>(h[0].size(),0));
        vector<vector<int>>dis={{-1,0},{1,0},{0,1},{0,-1}};

        for(int i=0;i<h.size();i++){
            if(i==0 || i==h.size()-1){
                for(int j=0;j<h[0].size();j++){
                    pq.push({h[i][j],{i,j}});
                    vis[i][j]=1;
                }
            }
        }
        for(int j=0;j<h[0].size();j++){
            if(j==0 || j==h[0].size()-1){
                for(int i=0;i<h.size();i++){
                    pq.push({h[i][j],{i,j}});
                    vis[i][j]=1;
                }
            }
        }
        int ans=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int water=it.first,row=it.second.first,col=it.second.second;

            for(int i=0;i<4;i++){
                int nrow=row+dis[i][0];
                int ncol=col+dis[i][1];

                if(nrow>=0 && ncol>=0 && nrow<h.size() && ncol<h[0].size() && !vis[nrow][ncol]){
                    ans+=max(water-h[nrow][ncol],0);
                    int maxi=max(water,h[nrow][ncol]);
                    pq.push({maxi,{nrow,ncol}});
                    vis[nrow][ncol]=1;
                }
            }

        }
        return ans;


    }
};