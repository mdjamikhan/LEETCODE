class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            return s.size();
        }
        int count=0;
        int k=1;
        for(auto it:mp){
            if(it.second%2==0){ 
                count=count+it.second;
            }
            else if(it.second%2==1 && it.second>1){
                count=count+it.second-1;
            }
            else if(it.second%2==1 && it.second==1 && k==1){
                count=count+it.second;
                k=0;
            }    
        }
        return count;
        
    }
};