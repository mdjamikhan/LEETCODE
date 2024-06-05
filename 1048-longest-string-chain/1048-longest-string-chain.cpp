class Solution {
public:
bool check(string &a,string &b){
    if(a.size()!=b.size()+1)return false;
    int i=0;
    int j=0;
    while(i<a.size()){
        if(a[i]==b[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }
    if(i==a.size() && j==b.size()) return true;
    return false;
}
static bool comp(string &str1,string &str2){
    return str1.size()<str2.size();
}
    int longestStrChain(vector<string>& words) {
        int n=words.size();
        sort(words.begin(),words.end(),comp);
        vector<int>dp(n,1);
        int maxi=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++){
                if(check(words[i],words[j]) && dp[j]+1>dp[i]){
                    dp[i]=dp[j]+1;
                }
            }
            if(maxi<dp[i]){
                maxi=dp[i];
            }

        }
        return maxi;
        
    }
};