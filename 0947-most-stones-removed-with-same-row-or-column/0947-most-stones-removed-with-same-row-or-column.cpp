class Solution {
public:
void dfs(int index,vector<vector<int>>&stones,vector<bool>&visited){
    visited[index]=true;

    for(int i=0;i<stones.size();i++)
    {
        int r=stones[index][0];
        int c=stones[index][1];
        if(!visited[i] && (stones[i][0]==r  || stones[i][1]==c)){
            dfs(i,stones,visited);
        }
    }
}

int count=0;
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        int m=stones[0].size();
        vector<bool> visited(n,false);
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(visited[i]==true) continue;

            if(!visited[i]){
                dfs(i,stones,visited);
                count++;
            }

        }
        return n-count;

        
        
    }
};