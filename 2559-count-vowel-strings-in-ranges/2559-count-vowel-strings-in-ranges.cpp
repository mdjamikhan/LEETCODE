class Solution {
public:
bool check(char app){
    string vol="aeiou";
    for(int i=0;i<5;i++){
        if(app==vol[i]) return true;

    }
    return false;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int>newd(n);
        string kk=words[0];
        if(check(words[0][0]) &&  check(words[0][words[0].size() - 1])) newd[0]=1;
        else newd[0]=0;
        for(int i=1;i<n;i++){
           // string pp=words[i];
           if (check(words[i][0]) && check(words[i][words[i].size() - 1])) newd[i]=newd[i-1]+1;
            else{
                newd[i]=newd[i-1];
            }

        }
        vector<int>ans;

        for(auto it:queries){
            if(it[0]==0) ans.push_back(newd[it[1]]);
            else ans.push_back(newd[it[1]]-newd[it[0]-1]);
        }
        return ans;

        
    }
};