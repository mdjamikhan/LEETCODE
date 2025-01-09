class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int n=pref.size();
        int count=0;
        for(string it :words){
            if(it.size()>=n){
                if(it.substr(0,n)==pref) count++;
            }

        }
        return count;
        
    }
};