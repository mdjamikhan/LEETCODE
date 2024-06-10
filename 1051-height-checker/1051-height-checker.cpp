class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>ans(heights.begin(),heights.end());
        sort(ans.begin(),ans.end());
        int n=ans.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(ans[i]!=heights[i]) count++;
        }
        return count;
        
    }
};