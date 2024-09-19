class Solution {
public:
    long long minimumSteps(string s) {
        int i=0;
        int j=s.size();
        long long count=0;
        long long  one=0;
        while(i<j){

            if(s[i]=='0') count+=one;  
            if(s[i]=='1') one++;
            i++;
            
        }
        return count;

    }
        
    
};