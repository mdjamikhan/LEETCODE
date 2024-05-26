class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        // int pro=0;
        // int mini=prices[0];
       
        // for(int i=1;i<n;i++)
        // {
        //    int cost=prices[i]-mini;
        //    pro=max(pro,cost);
        //    mini=min(mini,prices[i]);
        // }
        // return pro;        
        int pro=0;
        int mini=prices[0];
        for(int i=1;i<n;i++)
        {
            pro=max(pro,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return pro;
    }
};