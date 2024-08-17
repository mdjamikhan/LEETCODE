class NeighborSum {
public:
vector<vector<int>>ans;
vector<int>store;

    NeighborSum(vector<vector<int>>& grid) {
  
        ans=grid;
 

        
    }
    // bool valid(int i,int j){
    //     if(i>0 && i<ans.size()-1 && j>0 && j<ans.size()-1) return true;

    //     return false;

    // }
    
    int adjacentSum(int value) {
        int sum=0;
        int n=ans.size();
  

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ans[i][j]==value){

                    if(i>0){
                        sum+=ans[i-1][j];
                    }
                    if(j>0){
                        sum+=ans[i][j-1];
                    }
                    if(i<=n-1){
                        sum+=ans[i+1][j];
                    }
                    if(j<=n-1){
                        sum+=ans[i][j+1];
                    }
                }

            }
        }
        return sum;
        
        
    }
    
    int diagonalSum(int value) {
        int n=ans.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ans[i][j]==value){

                    if(i-1>=0 && j-1>=0){
                        sum+=ans[i-1][j-1];
                    }
                    if(i+1<=n-1 && j+1<=n-1){
                        sum+=ans[i+1][j+1];
                    }
                    if(i+1<=n-1 && j-1>=0){
                        sum+=ans[i+1][j-1];
                    }
                     if(i-1>=0 && j+1<=n-1){
                        sum+=ans[i-1][j+1];
                    }
                }

            }
        }
        return sum;

        
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */