class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n=s.size();
        int m=t.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                if(s[i]==t[j]){
                    sum+=abs(i-j);
                }
            }
        }
        return sum;
    }
};