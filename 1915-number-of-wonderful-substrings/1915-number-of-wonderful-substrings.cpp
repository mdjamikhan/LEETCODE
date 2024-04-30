class Solution {
public:
typedef long long ll;
    long long wonderfulSubstrings(string word) {
        ll result=0;
        unordered_map<ll,ll>mp;
        mp[0]=1;
        ll cum_xor=0;
        for(char &ch:word){

            int val=ch-'a';
            cum_xor^=(1<<val);
            result+=mp[cum_xor];
            //************* this is for even part now find odd part;
            for(char ch1='a';ch1<='j';ch1++)
            {
                val=ch1-'a';
                ll check_xor=(cum_xor^(1<<val));
                result+=mp[check_xor];
            }
            mp[cum_xor]++;

        }
        return result;
        
    }
};