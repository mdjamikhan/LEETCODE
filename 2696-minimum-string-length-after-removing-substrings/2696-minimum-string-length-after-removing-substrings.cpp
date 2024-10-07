class Solution {
public:
    int minLength(string s) {
       
        
        for(int i=0;i<s.size();i++)
        {
            string k="";
            int f=0;
            for(int j=0;j<s.size();j++){
                if( j<s.size()-1  && (s[j+1]=='B' && s[j]=='A') || (s[j]=='C' && s[j+1]=='D')){
                    f=1;
                    j++;
                }
                else{
                    k+= s[j];  
                }
                
            }
            if(!f) break;
           
            s=k;
        }
        return s.size();
        
        
    }
};