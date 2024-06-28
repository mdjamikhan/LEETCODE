class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int,int>mp;
        for(auto it:roads){
            mp[it[0]]++;
            mp[it[1]]++;
        }
        vector<pair<int,int>>ans(mp.begin(),mp.end());
       sort(ans.begin(), ans.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });
    long long sum=0;

     for(auto it:ans){
        sum+=it.second*n;
        n--;
        
     }
     return sum;
        
    }
};