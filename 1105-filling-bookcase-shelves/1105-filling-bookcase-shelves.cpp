class Solution {
public:
    int minHeightShelves(vector<vector<int>>& books, int shelf) {
        vector<int>dp(1001,INT_MAX);
        dp[0]=0;
        int n=books.size();
       
        for(int i=1;i<=books.size();i++){
            int h=0;
            int w=0;
            for(int j=i;j>0;j--){
                w+=books[j-1][0];
                if(shelf<w){
                    break;
                }

                h=max(h,books[j-1][1]);
                dp[i]=min(dp[i],h+dp[j-1]);
            }
        }
        return dp[n];
           

            


        
        
    }
};