class Solution {
public:
    int minimumPushes(string word) {
         unordered_map<char,int>mp1;
        for(auto it:word){
            mp1[it]++;
        }
        vector<pair<char,int>>mp(mp1.begin(),mp1.end());

        sort(mp.begin(),mp.end(),[](const pair<char,int>&a , const pair<char,int> &b){
            return a.second>b.second;
        });
        int count=0;
        int sum=0;
        for(auto it:mp){
            count++;
            if(count%8==0){
                sum+=it.second*2;

            }
            else{
                sum+=it.second;
            }
        }
        return sum;


        
    }
};