class Solution {
public:
    int scoreOfString(string s) {
        vector<int>ans;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            ans.push_back(s[i]);
        }
        int sum=0;
        for(int i=1;i<=n-1;i++)
        {
            sum+=abs(ans[i]-ans[i-1]);

        }
        return sum;
        
    }
};