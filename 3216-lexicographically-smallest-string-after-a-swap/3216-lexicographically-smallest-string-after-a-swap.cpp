class Solution {
public:
    string getSmallestString(string s) {

        int n=s.size();
        int ev=0;
       
        for(int i=1;i<n;i++)
        {
            if((s[i-1]-'0')%2==0 && (s[i]-'0')%2==0){
                if((s[i-1]-'0')> (s[i]-'0') && ev!=1){
                    swap(s[i-1],s[i]);
                    ev=1;
                }
            }
            else if((s[i-1]-'0')%2!=0 && (s[i]-'0')%2!=0){
                if((s[i-1]-'0')> (s[i]-'0') && ev!=1){
                    swap(s[i-1],s[i]);
                    ev=1;
                }
            }
        }
        return s;
        
    }
};