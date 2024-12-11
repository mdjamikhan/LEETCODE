class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {

        map<int,int>mp;
        // sort(nums.begin(),nums.end());
        for(auto it:nums){
            mp[it-k]++;
            mp[it+k+1]--;
        }
        int count=0;
        int maaxi=0;
        for(auto it:mp){
            cout<<it.first<<" "<<it.second<<endl;
            count+=it.second;
            maaxi=max(maaxi,count);


        }
        return maaxi;

        
    }
};