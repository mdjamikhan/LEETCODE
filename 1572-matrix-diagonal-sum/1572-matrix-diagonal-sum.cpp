class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        int m=mat[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(i==j){
                    sum+=mat[i][j];
                }

            }
        }
        for (int i = n - 1, j = 0; i >= 0 && j < m; --i, ++j) {
            sum += mat[i][j];
        }
        if(n&1){
            sum-=mat[n/2][m/2];
        }
        return sum;
        
    }
};