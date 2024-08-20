class Solution {
public:
void solve(int i,int n,vector<string>&ans,string take,int count,int closecount){
    if(i==2*n){
        ans.push_back(take);
        return;
    }
    if(take.empty()){
       
        solve(i+1,n,ans,take+"(",count+1,closecount);
    }
    else{
        if(count<n){
           // count++;
            solve(i+1,n,ans,take+"(",count+1,closecount);
            
        }
        if(closecount<count){
            solve(i+1,n,ans,take+")",count,closecount+1);

        }
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0, n, ans, "", 0,0);
        return ans;
    }

};