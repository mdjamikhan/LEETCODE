class Solution {
public:
    int countTriplets(vector<int>& arr) {

        int n=arr.size();
        vector<int>ans(n+1,0);
        int count=0;
        for(int i=0;i<n;i++)
        {
            ans[i+1]=ans[i]^arr[i];
            
        }
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ans[j]==ans[k+1]){
                    count+=(k-j);
                }
            }
        }
        return count;

        
    }
};