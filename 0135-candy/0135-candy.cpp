class Solution {
public:
    int candy(vector<int>& rate) {
        int n=rate.size();
        int first=1;
        int all=1;
        vector<int>ans(n,1);
        for(int i=1;i<n;i++)
        {
            if(rate[i]>rate[i-1]){
                ans[i]=ans[i-1]+1;
                
            }
        }
        for(int i=n-2;i>=0;i--){
            if(rate[i]>rate[i+1]){
               ans[i] = max(ans[i], ans[i + 1] + 1);
            }
        }
        int sum=accumulate(ans.begin(),ans.end(),0);
        return sum;
        
    }
};