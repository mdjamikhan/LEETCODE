class Solution {
public:
vector<vector<int>>ans;

void solve(int i,vector<int>& nums,vector<int>&res){
    if(i==nums.size()){
        ans.push_back(res);
        return ;
    }
    //ans.insert(res)

   // for(int l=i;l<=nums.size();l++)
  //  {
        res.push_back(nums[i]);
        solve(i+1,nums,res);
        res.pop_back();
        solve(i+1,nums,res);
   // }

    
}


    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int>res;
        int n=nums.size();
        solve(0,nums,res);
        return ans;
        
    }
};