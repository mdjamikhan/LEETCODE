class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int it=1;
        while(left<=right && top<=bottom){
            
      
            for(int i=left;i<=right;i++)
            {
                ans[top][i]=it;
                it+=1;

            }
            top++;
            for(int i=top;i<=bottom;i++){
                ans[i][right]=it;
                it+=1;
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                {
                    ans[bottom][i]=it;
                    it+=1;
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans[i][left]=it;
                    it+=1;
                }
                left++;
            }
        }
        return ans;
        
    }
};