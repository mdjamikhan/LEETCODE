class Solution {
public:
    int countPalindromicSubsequence(string s) {
        unordered_set<char>mp;

        for(char it:s){
            mp.insert(it);
        }
        int ans=0;
        for(char it:mp){
            int i=-1;
            int j=0;
            for(int k=0;k<s.size();k++){
                if(s[k]==it){
                    if(i==-1){
                        i=k;
                    }
                    j=k;
                }
            }
            unordered_set<char>between;

            for(int k=i+1;k<j;k++){
                between.insert(s[k]);

            }
            ans+=between.size();
        }

        return ans;


        
    }
};