class Solution {
public:
void solve(int i,vector<int>store,vector<vector<int>>&res,int n,vector<int>& nums,vector<int>&dup){
    if(store.size()==n){
       // if(res.find(store)==res.end()){
            res.push_back(store);
            //return;
        //}
        return;
    }
    for(int j=0;j<n;j++)
    {
        if(dup[j] || (j>0 && nums[j]==nums[j-1]&& !dup[j-1])) continue;


            store.push_back(nums[j]);
            dup[j]=true;
            solve(j+1,store,res,n,nums,dup);
            store.pop_back();
            dup[j]=false;

        
        
    }

}
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n=nums.size();
        vector<int>dup(n,false);
        vector<int>store;
        sort(nums.begin(),nums.end());
        vector<vector<int>>res;
        solve(0,store,res,n,nums,dup);
        return res;
        
    }
};