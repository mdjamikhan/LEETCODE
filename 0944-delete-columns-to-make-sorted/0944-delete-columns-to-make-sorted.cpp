class Solution {
public:
int solve(char a,char b){
    if(a<=b) return 0;
    return 1;

}
    int minDeletionSize(vector<string>& strs) {
        int n=strs.size();
        int m=strs[0].size();
        int take=0;
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                take=solve(strs[j-1][i],strs[j][i]);
                if(take){
                    count++;
                    take=0;
                    break;

                }
            }
            
        }
        return count;



        
    }
};