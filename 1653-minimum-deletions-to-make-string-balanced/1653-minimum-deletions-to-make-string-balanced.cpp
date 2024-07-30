class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int ans=0;
            int count=0;
        for(int i=0;i<=n;i++)
        {
            if(s[i]=='b') count++;
            else if(s[i]=='a'){
                ans=min(ans+1,count);
            }
            

            
        }
        return ans;

        
    }
};