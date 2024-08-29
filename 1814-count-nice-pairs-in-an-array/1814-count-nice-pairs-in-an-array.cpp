class Solution {
public:
int mod=1e9+7;
int revi(int n){
    int rev=0;
    while(n!=0){
        int r=n%10;
        n/=10;
        rev=rev*10+r;
    }
    return rev;

}
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int count=0;
        for(int it:nums){
            count =(count+mp[it-revi(it)]++)%mod;
        }
        return count;
        
    }
};