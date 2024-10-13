class Solution {
public:
int solve(map<int,int>&mp,int x){
    vector<pair<int,int>>take;
    for(auto it:mp){
        take.push_back({it.second,it.first});
    }
    auto cmp=[](auto a,auto b){
        if(a.first==b.first)return a.second>b.second;
        return a.first>b.first;        
    };
    sort(take.begin(),take.end(),cmp);
    int ans=0;

    for(auto it:take){
        ans+=(it.first)*(it.second);
        x--;
        if(x==0) break;
        
    }
    return ans;

}
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>ans;
        for(int i=0;i<nums.size()-k+1;i++)
        {
            map<int,int>mp;
            int sum=0;
            int decre=x;
            for(int j=i;j<k+i;j++)
            {
                mp[nums[j]]++;
            }
            vector<pair<int,int>>alldata;
            for(auto it:mp){
                alldata.push_back({it.second,it.first});
            }
            auto c=[](auto a,auto b){
                if(a.first==b.first) return a.second>b.second;
                else return a.first>b.first;
            };
            sort(alldata.begin(),alldata.end(),c);
            for(auto it:alldata){
                sum+=(it.first)*(it.second);
                decre--;
                if(decre==0) break;
                
            }
            ans.push_back(sum);
        }
        return ans;
        
    }
};