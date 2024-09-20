class Solution {
public:
    string shortestPalindrome(string s) {
        string t=s;
        reverse(t.begin(),t.end());
        string original=s;
        string revstring=t;

        for(int i=0;i<s.size();i++)
        {
            if(original.substr(0,s.size()-i)==revstring.substr(i)){
                return t.substr(0,i)+s;
            }
        }
        return s+t;

        
        
    }
};