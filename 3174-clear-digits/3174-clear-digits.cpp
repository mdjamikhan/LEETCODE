class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        int count=1;
        string p="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9'){
                if(i>0){
                    p.pop_back();
                    
                }
                else{
                     continue;
                    
                }

            }
            else{
                p+=s[i];
            }


        }
       
        
      
        return p;
        
    }
};