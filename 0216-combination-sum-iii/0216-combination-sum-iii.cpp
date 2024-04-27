class Solution {
public:
void solve(int i,vector<vector<int>>&ans,vector<int>&take,int k,int target,int p){
    if(target==0 && take.size()==k){
        ans.push_back(take);
        return;
    }
    for(int l=i;l<p;l++)
    {
        //sum+=i;
        if( l<=target)
        {
            take.push_back(l);
            solve(l+1,ans,take,k,target-l,p);
            take.pop_back();
        }

    }
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>take;
        int p=n;
        solve(1,ans,take,k,n,p);
        return ans;
        
    }
};