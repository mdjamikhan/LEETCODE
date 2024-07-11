class Solution {
public:
    string reverseParentheses(string s) {
        string a="";
        string ans="";
        stack<string>st;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]==')'){

                reverse(a.begin(),a.end());
                a=st.top()+a;
                st.pop();
                
                
            
            }
            else if(s[i]=='('){
                st.push(a);
                a="";
            }
            else{
                a+=s[i];
            }

        }

        return a;
        
    }
};