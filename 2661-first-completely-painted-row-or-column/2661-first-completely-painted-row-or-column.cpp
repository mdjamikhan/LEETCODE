class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
         unordered_map<int, pair<int, int>> mp;

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[mat[i][j]]={i,j};

            }
        }
        vector<int>ans(n,0);
        vector<int>col(m,0);

        for(int i=0;i<arr.size();i++){

            auto it=mp[arr[i]];
            ans[it.first]++;
            col[it.second]++;
            if(ans[it.first]==m ||col[it.second]==n){
                return i;
   
            }


            

            
        }
        return -1;
       
        
    }
};