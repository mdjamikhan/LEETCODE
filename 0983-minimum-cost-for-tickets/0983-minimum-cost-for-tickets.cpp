class Solution {
public:
int solve(int i,int prev,vector<int>&days,vector<int>&costs,vector<int>&dp){
    if(i==days.size()) return 0;
    if(dp[i]!=-1) return dp[i];

    int one=0;
    int two=0;
    int three=0;
    one=costs[0]+solve(i+1,days[i],days,costs,dp);
    int j=i;
    while(j<days.size() && days[i]+7>days[j]) j++;
     two=costs[1]+solve(j,days[i],days,costs,dp);

    j=i;
    while(j<days.size() && days[i]+30>days[j]) j++;
    three=costs[2]+solve(j,days[i],days,costs,dp);

   return  dp[i]=min({one,two,three});


   
}
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size(),-1);
        return solve(0,-1,days,costs,dp);
       
        
    }
};