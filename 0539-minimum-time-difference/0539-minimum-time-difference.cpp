class Solution {
public:
int solve(string a,string b){
    int h1=stoi(a.substr(0,a.find(':')));
    int h2=stoi(b.substr(0,b.find(':')));
    int m1=stoi(a.substr(a.find(':')+1));
    int m2=stoi(b.substr(b.find(':')+1));
    if(h1==0) {
        h1=24;
    }
     if(h2==0){
        h2=24;
    }

    int total1=h1*60+m1;
    int total2=h2*60+m2;
    int k=(abs(total1-total2));
    return k;

}
    int findMinDifference(vector<string>& t) {
        sort(t.begin(),t.end());
        int n=t.size();
        int mini=INT_MAX;
        for(int i=1;i<n;i++)
        {
            int t1=solve(t[i-1],t[i]);
            mini=min(mini,t1);
        }
         int wrap_around_diff = solve(t[0], t[n - 1]);
        wrap_around_diff = min(wrap_around_diff, 1440 - wrap_around_diff); // Handle the day wrap-around properly

        mini = min(mini, wrap_around_diff);
        return mini;
        
    }
};