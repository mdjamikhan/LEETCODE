class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>mp;
        
        vector<int>ans;
        for(int it:nums){
            mp[it]++;
        }
        vector<pair<int,int>>mp1(mp.begin(),mp.end());
        sort(mp1.begin(),mp1.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.second<b.second;
        });
        for(auto it:mp1){
            while(it.second--){
                ans.push_back(it.first);
            }
        }
        return ans;

        
    }
};