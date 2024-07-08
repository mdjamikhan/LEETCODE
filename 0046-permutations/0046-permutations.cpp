class Solution {
public:
 vector<vector<int>>ans;
void solve(int ind,int n,vector<int>& nums,vector<int>take,vector<bool>&dup){

    if(take.size()==n){
        ans.push_back(take);
        return;
    }

    for(int i=0;i<n;i++)
    {
        if(!dup[i]){
            take.push_back(nums[i]);
            dup[i]=true;
        
            solve(i,n,nums,take,dup);
            dup[i]=false;
            take.pop_back();
        }
    }
    
    
    
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>take;
       vector<bool>dup(nums.size(),false);
        solve(0,nums.size(),nums,take,dup);
        return ans;
        
    }
};