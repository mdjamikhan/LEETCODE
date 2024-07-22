class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       // vector<string>ans;
        vector<pair<string,int>>mp;
        for(int i=0;i<names.size();i++)
        {
            mp.push_back({names[i],heights[i]});
        }
        sort(mp.begin(), mp.end(), [](const pair<string, int> &a, const pair<string, int> &b) {
        return a.second > b.second;
    });

        vector<string>ans;
        for(auto it:mp){
            ans.push_back(it.first);

        }
        return ans;

        
    }
};