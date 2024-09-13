class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& qu) {
        vector<int>ans;
        for(int i=0;i<qu.size();i++)
        {
            int one=qu[i][0];
            int two=qu[i][1];
            int sum=0;
            for(int j=one;j<=two;j++)
            {
                sum^=arr[j];

            }
            ans.push_back(sum);
            
        }
        return ans;
        
    }
};