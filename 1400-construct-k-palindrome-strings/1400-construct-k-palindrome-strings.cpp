class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k==s.size()) return true;
        if(k>s.size()) return false;
        unordered_map<char,int>mp;
        for(char it:s){
            mp[it]++;
        }
        int mini=INT_MAX;
        int sumo=0;
        for(auto it:mp){
            if(it.second %2== 1){
                 sumo++;
                
            }    
        }
        if(sumo>k) return false;

        return true;

        
    }
};