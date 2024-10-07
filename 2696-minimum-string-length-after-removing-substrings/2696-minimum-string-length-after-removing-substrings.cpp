class Solution {
public:
    int minLength(string s) {
        int f=1;
       
        
        while(1)
        {
            string k="";
            int check=0;
           
            for(int j=0;j<s.size();j++){
                if( j<s.size()-1  && ((s[j+1]=='B' && s[j]=='A') || (s[j]=='C' && s[j+1]=='D'))){
                   check=1;
                    j++;
                }
                else{
                    
                    k+= s[j];  
                }
                
            }
           if(!check) break;
           
            s=k;
        }
            if(s=="AB" || s=="CD") return 0;
        return s.size();
        
        
    }
};