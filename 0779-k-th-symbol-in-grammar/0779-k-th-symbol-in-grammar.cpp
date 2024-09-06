class Solution {
public:
    int kthGrammar(int n, int k) {
        string s="0";

        for(int i=1;i<n;i++)
        {
            string temp="";
            for(char it:s)
                {
                if(it=='0'){
                    temp+="01";
                }
                else{
                    temp+="10";
                }
            }
            s=temp;
        }
       
        return s[k-1]-'0';

        
        
    }
};