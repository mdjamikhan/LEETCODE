class Solution {
public:
    int minimumLength(string s) {
        if(s.size()<3) return s.size();
        unordered_map<char,int>mp;
        for(auto it:s){
            mp[it]++;
        }
        int count=0;
        for(auto it:mp){
            if(it.second>=3){
                while(it.second>=3){
                    it.second-=2;
                }
                count+=it.second;
            }
            else{
                count+=it.second;
            }
            cout<<count;
        }
        return count;
        
    }
};