class Solution {
public:


    string stringHash(string s, int k) {
        vector<char> alpha(26);
        for (int i = 0; i < 26; ++i) {
            alpha[i] = static_cast<char>('a' + i);
        }
        
        string ans = "";
        int sum=0;
        int p=0;
        for(int i = 0; i < s.size(); i++) {
            p++;
            sum+=s[i]-'a';

            if(p==k){
                ans+=alpha[sum%26];
                p=0;
                sum=0;
            }

        }
        
        return ans;
    }
};
