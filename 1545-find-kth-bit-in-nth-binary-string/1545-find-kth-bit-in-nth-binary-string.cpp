class Solution {
    void solve(int i,int n,string &ans){
        if(i==n) return;

        string re=ans;
        reverse(re.begin(),re.end());
        for(char &it:re){
            it=(it=='1')?'0':'1';
        }
        ans=ans+"1"+re;
        solve(i+1,n,ans);



        

    }
public:
    char findKthBit(int n, int k) {
        string ans="0";
        solve(1,n,ans);
        return ans[k-1];


        
    }
};