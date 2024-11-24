class Solution {
public:
 
    long long maxMatrixSum(vector<vector<int>>& mat) {
        int n = mat.size();
        long long sum = 0;
        int minu=0;
        int small=INT_MAX;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                sum+=abs(mat[i][j]);
                int pos=abs(mat[i][j]);

                if(mat[i][j]<0) minu++;
                small=min(small,pos);
            }
        }
        if(minu%2!=0){
            sum-=(2*small);
        }



        return sum;
    }
};
