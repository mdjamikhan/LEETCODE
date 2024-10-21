class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
       // unordered_map<char,int>mp;
        for(int i=1;i<=n-1;i++)
        {
            string p="";
            int count=1;
            for(int j=1;j<ans.size();j++)
            {
                if(ans[j]==ans[j-1]){
                    count++;

                }
                else{
                    p+=to_string(count);
                    p+=ans[j-1];
                    count=1;
                }

            }
           
            p+=to_string(count)+ans.back();
            ans=p;

        }
        return ans;
        
    }
};