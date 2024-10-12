class Solution {
public:
vector<vector<int>>ans;
void solve(int i,int n,int k,vector<int>store,bool &dup){
    if(store.size()==k){
        ans.push_back(store);
        return;
    }
    for(int j=i;j<=n;j++)
    {
        store.push_back(j);
        solve(j+1,n,k,store,dup);
        store.pop_back();
    }


}
    vector<vector<int>> combine(int n, int k) {
        vector<int>store;
        bool dup=false;
        solve(1,n,k,store,dup);
        return ans;
        
    }
};