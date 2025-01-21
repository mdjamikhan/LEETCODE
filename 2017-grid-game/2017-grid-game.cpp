class Solution {
public:
    long long gridGame(vector<vector<int>>& grid) {
        int n=grid[0].size();
        long long fir=accumulate(begin(grid[0]),end(grid[0]),0LL);
        long long sec=0;
        long long mini=LLONG_MAX;
         for(int i=0;i<grid[0].size();i++){
            fir-=grid[0][i];

            mini=min(mini,max(fir,sec));
            sec+=grid[1][i];


         }
         return mini;
        
    }
};