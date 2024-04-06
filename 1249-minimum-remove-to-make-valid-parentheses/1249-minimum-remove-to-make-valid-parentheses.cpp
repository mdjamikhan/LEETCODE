class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n=s.size();
        stack<char>stk;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='a' && s[i]<='z'){
                continue;
            }
            if(s[i]=='('){
                stk.push(i);
            }
            else{
                if(!stk.empty()){
                    stk.pop();
                }
                else{
                    s[i]='#';
                }
            }
        }
        while(!stk.empty()){
            s[stk.top()]='#';
            stk.pop();
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(s[i]!='#'){
                ans+=s[i];
            }
        }
        return ans;

        
    }
};