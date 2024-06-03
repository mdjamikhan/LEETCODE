class Solution {
public:
    int appendCharacters(string s, string t) {
        int n=s.size();
        int m=t.size();
        int count=0;
        int i=0;
        int j=0;
        while(i<=n-1 && j<=m-1){
            if(s[i]==t[j]){
                count++;
                i++;
                j++;
            }
            else{
                i++;
            }
        }
        return m-count;

        
    }
};