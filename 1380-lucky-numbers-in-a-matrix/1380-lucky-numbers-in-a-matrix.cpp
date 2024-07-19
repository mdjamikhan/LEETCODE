class Solution {
public:
 vector<int>ans;
void solve(int j,int maxi,int n,vector<vector<int>>& matrix){
    for(int i=0;i<n;i++)
    {
        if(maxi<matrix[i][j]){
            return;
        }
    }
    ans.push_back(maxi);

    
}
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n=matrix.size();
        cout<<n;
        int m=matrix[0].size();
        cout<<m;
        for(int i=0;i<n;i++)
        {
            int maxi=INT_MAX;
            int index2=-1;
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]<maxi){
                    maxi=matrix[i][j]; 
                    index2=j;
                }
   
            }
                solve(index2,maxi,n,matrix);
        }
        return ans;
        
    }
};