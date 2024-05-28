class Solution {
public:
// int solve(int i,int j,string s,string t,int max,vector<vector<int>>&dp){
//     if(i==0 || j==0)
// }
    int equalSubstring(string s, string t, int maxCost) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        int n=s.size();
        int m=t.size();
        bool check=false;
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(s[i]==t[j]){
                    check=true;

                }
            }
            if(check){
                count++;
                check=false;
            }
        }

        int diff= maxCost-count;
        if(diff==0) return maxCost;
        else if(diff>0) return diff;
        return 1;


        
    }
};