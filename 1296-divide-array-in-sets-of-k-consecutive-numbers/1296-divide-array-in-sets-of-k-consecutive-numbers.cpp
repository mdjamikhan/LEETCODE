class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        for(auto it=mp.begin();it!=mp.end();){
            if(it->second>0){
                for(int j=0;j<k;j++)
                {
                    if(mp[it->first+j]>0){
                        mp[it->first+j]--;
                    }
                    else{
                        return false;
                    }
                }
            }
            else{
                it++;
            }
        }
        return true;
        
    }
};