class Solution {
public:
int  solve(int i,string s,unordered_map<string,int>&mp){
    if(i==s.size()) return 0;

    string p="";
    int maxic=0;
    for(int j=i;j<s.size();j++)
    {
         p+=s[j];
         if(mp.find(p)==mp.end()){
             mp[p]++;
             maxic=max(maxic,1+solve(j+1,s,mp));
             mp.erase(p);
         }
    }
    return maxic;
}
    int maxUniqueSplit(string s) {
        unordered_map<string,int>mp;
        return solve(0,s,mp);       
    }
};