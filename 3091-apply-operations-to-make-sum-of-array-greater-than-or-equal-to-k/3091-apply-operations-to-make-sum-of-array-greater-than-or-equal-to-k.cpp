class Solution {
public:
    int minOperations(int k) {
        int ans=k-1;
        
        
        for(int i=0;i<=k;i++)
        {
            int a=i+1;
            int b=(k+a-1)/a-1;
            ans=min(ans,b+i);
            
        }
        return ans;
    
}

        
};