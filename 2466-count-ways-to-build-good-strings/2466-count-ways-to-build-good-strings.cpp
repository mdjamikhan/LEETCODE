class Solution {
public:
int solve(int i,int low,int high,int zero,int one,vector<vector<int>>&dp,string store){
    if(i>high) return 0;
    if(dp[i][store.size()]!=-1) return dp[i][store.size()];

    int count=0;
    if(i>=low && i<=high) count= 1;


    store.push_back('0');


    count=(count+solve(i+zero,low,high,zero,one,dp,store))%1000000007;
    store.pop_back();
    store.push_back('1');
    count=(count+solve(i+one,low,high,zero,one,dp,store))%1000000007;
    store.pop_back();
    

    return dp[i][store.size()]=(count)%1000000007;





}
    int countGoodStrings(int low, int high, int zero, int one) {
        //vector<int>dp(high+1,-1);
        vector<vector<int>>dp(high+1,vector<int>(high+1,-1));
        string store="";
        return solve(0,low,high,zero,one,dp,store);


        
    }
};