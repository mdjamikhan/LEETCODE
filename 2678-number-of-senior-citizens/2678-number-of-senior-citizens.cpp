class Solution {
public:
int solve(string a){
    if(a.size()<13) return 0;

        string k="";
        k.push_back(a[11]);
        k.push_back(a[12]);
        cout<<k;
        if((stoi(k))>60) return 1;
        return 0;
}
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(solve(details[i])){
                count++;
            }
        }
        return count;



        
    }
};