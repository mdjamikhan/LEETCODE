class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int maxi=0;
        int bit=0;
        mp[0]=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'||s[i]=='u'){
                bit^=1<<((int)(s[i]-'a'));
            }
            if(mp.count(bit)) maxi=max(maxi,i-mp[bit]);
            else{
                mp[bit]=i;
            }
        }
        return maxi;



        
    }
};