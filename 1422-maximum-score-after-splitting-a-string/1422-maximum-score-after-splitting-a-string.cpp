class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int zero=0;
        int Max=0;
        
        int Count=count(s.begin(),s.end(),'1');
        for(int i=0;i<n-1;i++)
        {
            zero+=(s[i]=='0');
            Count-=(s[i]=='1');
            Max=max(Max,zero+Count);
        }
        return Max;
        




        
    }
};