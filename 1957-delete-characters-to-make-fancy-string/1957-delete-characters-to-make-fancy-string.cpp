class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int count=1;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1]){
                count++;
                if(count<3){
                    ans+=s[i];
                }

            }
            else{
                ans+=s[i];
                count=1;
            }

        }
        if(count){
            ans.push_back(s.back());
        }
    
        return ans;
        
    }
};