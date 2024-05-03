class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size();
        int count=0;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' && count++ >0){
                ans+=s[i];
            }
            else if(s[i]==')'&& --count >0){
                ans+=s[i];
            }

        }
        return ans;
        
    }
};