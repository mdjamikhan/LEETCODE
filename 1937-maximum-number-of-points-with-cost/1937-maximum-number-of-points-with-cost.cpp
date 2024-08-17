class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int m=points.size();
        int n=points[0].size();
        vector<long long>curr(n,0) ;
         for(int j=0;j<n;j++) curr[j]= points[m-1][j];

        vector<long long>left(n,0);
        vector<long long >right(n,0);
        for(int i=m-2;i>=0;i--){
            for(int j=0;j<n;j++)
            {
                if(j==0) left[j]=curr[j];

                else left[j]=max(left[j-1]-1,curr[j]);
            }
            for(int j=n-1;j>=0;j--)
            {
                if(j==n-1) right[j]=curr[j];
                else right[j]=max(right[j+1]-1,curr[j]);
            }

            for(int j=0;j<n;j++)
            {
                curr[j]=points[i][j]+max(right[j],left[j]);
            }


        }
            return *max_element(curr.begin(),curr.end());
        
    }
};