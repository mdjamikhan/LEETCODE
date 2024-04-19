class Solution {
public:
void solve(int i,vector<int>& nums,vector<vector<int>>&ans,vector<int>&take){
   // if(i==nums.size()){
        ans.push_back(take);
      //  return;
   // }
   // take.push_back(nums[i]);
    for(int k=i;k<nums.size();k++){
       if(k>i && nums[k]==nums[k-1]) continue;
       take.push_back(nums[k]);
        solve(k+1,nums,ans,take);
        take.pop_back();
       // solve(i+1,nums,ans,take);
    }
   // solve(i+1,nums,ans,take);
    

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
       // set<vector<int>>ans;
        vector<vector<int>> ans;
        vector<int>take;
        solve(0,nums,ans,take);
       // vector<vector<int>> ans1(ans.begin(),ans.end());

        return ans;


        
    }
};