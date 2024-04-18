class Solution {
public:
void solve(int i,vector<int>&candidates,int sum,int target,vector<vector<int>>&result,vector<int>&temp){
    if(sum==target){
     result.push_back(temp);
      return;
    }
    if(i==candidates.size()|| sum>target) return ;
    // sum+=candidates[i];
    temp.push_back(candidates[i]);
        solve(i, candidates, sum + candidates[i], target, result, temp);
        temp.pop_back();
     solve(i+1,candidates,sum,target,result,temp);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n=candidates.size();
        vector<vector<int>>result;
        vector<int>temp;
        solve(0,candidates,0,target,result,temp);
        return result;
        
    }
};