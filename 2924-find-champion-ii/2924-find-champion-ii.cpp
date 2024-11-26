class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) {
        vector<int>indeg(n,0);
        for(int i=0;i<edges.size();i++){
           // int u=edges[i][0];
            int v=edges[i][1];
            indeg[v]++;
            
        }
        int count=0;
        int ans=-1;

        for(int i=0;i<n;i++){
            if(indeg[i]==0){
                 count++;
                 ans=i;

            }
        }
        if(count>1) return -1;
        return ans;



        
        
    }
};