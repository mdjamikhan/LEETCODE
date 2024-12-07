class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int it:nums) mp[it]++;
        int count=0;
        for(auto it:mp){
            if(it.first>k) count++;
            else if(it.first<k) return -1;
        }
        return count;
       
        
    }
};