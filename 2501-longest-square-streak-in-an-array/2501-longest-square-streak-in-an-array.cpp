class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int it:nums) mp[it]++;
        int maxi=0;

        for(int it:nums){
            long long check=it*it;
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