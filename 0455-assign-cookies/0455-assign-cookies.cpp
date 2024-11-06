class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
         sort(s.begin(),s.end());
        int n=g.size();
        int m=s.size();
        int i=n-1;
        int j=m-1;
        int ans=0;
        while(i>=0 && j>=0)
        {
            if(g[i]<=s[j])
            {
                ans++;
                i--;
                j--;
            }
            else
            {
                i--;
            }

        }
 
        return ans;

        
    }
};