class Solution {
public:
void solve(int i,vector<int>& candidates, int target,vector<int>&take,vector<vector<int>>&ans)
{

            if(target==0){

                ans.push_back(take);
                return;
            }
        for(int k=i;k<candidates.size();k++)
        {
            if(k>i && candidates[k]==candidates[k-1]) continue;
            if(target<candidates[k]) break;        
            take.push_back(candidates[k]);
            solve(k+1,candidates,target-candidates[k],take,ans);
            take.pop_back();
        }
       // solve(i+1,candidates,target,take,ans);
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());


        vector<vector<int>>ans;
        vector<int>take;
        solve(0,candidates,target,take,ans);
        return ans;
        
    }
};