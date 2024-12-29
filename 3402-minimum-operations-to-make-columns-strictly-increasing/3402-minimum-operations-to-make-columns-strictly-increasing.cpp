class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int sum=0;
        for(int i=0;i<grid[0].size();i++){
            int value=grid[0][i];
            for(int j=1;j<grid.size();j++){
                if(value>=grid[j][i]){
                    int diff=value-grid[j][i];
                    sum+=diff+1;
                    value=grid[j][i]+diff+1;
                }
                else if(value<grid[j][i]){
                    value=grid[j][i];
                }
                

            }

        }
        return sum;
        
    }
};