class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans1(n,0);
        vector<vector<int>>ans=matrix;
        int flag=0;
       
        
        for(int i=0;i<n;i++)
        {
           
            for(int j=0;j<m;j++)
            {
                ans1[j]= max(ans1[j],matrix[i][j]); 
            }

        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==-1){
                    ans[i][j]=ans1[j];
                    //ans[i][j]=matrix[i][j];
                }

            }
        }

        return ans;
        
    }
};