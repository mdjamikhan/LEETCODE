class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int count=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            maxi=max(maxi,count);
        }
        return maxi;
        
    }
};