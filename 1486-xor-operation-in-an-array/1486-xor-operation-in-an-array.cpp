class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int k=start+2*i;
            ans.push_back(k);  
        }
        for(int i=1;i<=n-1;i++){
            ans[i]=ans[i]^ans[i-1];

        }
        int p=ans[n-1];
        return p;
        
        
    }
};