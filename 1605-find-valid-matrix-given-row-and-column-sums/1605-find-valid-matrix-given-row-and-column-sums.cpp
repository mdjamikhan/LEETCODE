class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& row, vector<int>& col) {
        int n=row.size();
        int m=col.size();
        vector<vector<int>>ans(n,vector<int>(m,0));
        int i=0;
        int j=0;
        while(i<n && j<m ){
            int value=min(row[i],col[j]);
            ans[i][j]=value;
            row[i]-=value;
            col[j]-=value;
            if(row[i]==0)i++;
            if(col[j]==0)j++;
        }
        
        return ans;
   
        
    }
};