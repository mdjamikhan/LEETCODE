class Solution {
public:
vector<int>solve(int start,int end,string &exp){
    vector<int>ans;

    for(int i=start;i<end;i++)
    {
        if(exp[i]=='-' || exp[i]=='+' || exp[i]=='*'){
            vector<int> left=solve(start,i-1,exp);
            vector<int>right=solve(i+1,end,exp);

            for(int l:left){
                for(int r:right){
                    if(exp[i]=='+'){
                        ans.push_back(l+r);
                    }
                    else if(exp[i]=='-'){
                        ans.push_back(l-r);
                    }
                    else{
                        ans.push_back(l*r);
                    }
                }
            }
        }
        
    }
        if (ans.empty()) {
            ans.push_back(stoi(exp.substr(start, end - start + 1)));
        }
        return ans;


}
    vector<int> diffWaysToCompute(string exp) {
        int n=exp.size();
        vector<int>dp(n,-1);
        return solve(0,n-1,exp);
        
    }
};