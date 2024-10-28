class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<long long ,long long >mp;
        for(int it:nums) mp[it]++;
        int maxi=0;

        for(auto it:nums){
            long long check=(long long)it*it;
            int count=1;
            while(mp.find(check)!=mp.end())
            {
             
                count++;
                check*=check;
                
            }
            maxi=max(maxi,count);

        }
        return maxi>1?maxi:-1;
        
    }
};