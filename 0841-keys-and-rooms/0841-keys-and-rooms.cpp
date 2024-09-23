class Solution {
public:
void dfs(int i,vector<vector<int>>& rooms,vector<int>&vis)
{
    vis[i]=1;
    for(auto it:rooms[i]){
        if(!vis[it]){
        
            dfs(it,rooms,vis);
        }
    }

}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        vector<int>vis(rooms.size(),0);
        int n=rooms.size();
       // int m=nums[0].size();
        vis[0]=1;
        for(int i=0;i<n;i++)
        {
            if(vis[i]){
                dfs( i,rooms,vis);
            }
        }
        int count=0;

        for(int i=0;i<vis.size();i++)
        {
            if(vis[i]==1)count++;

        }
        return n==count;
        
    }
};