class Solution {
public:
    string convert(string s, int row) {
        int n=s.size();
        vector<vector<char>> ans(row, vector<char>(n, '\0'));
        int k=0;

        int i=0;
        int j=0;
        while(k<n){
            while(i<row && k<n){
                ans[i][j]=s[k];
                k++;
                i++;
            }
            i-=2;
            j++;
            while(i>=0 && k<n){
                ans[i][j]=(s[k]);
                k++;
                i--;
                j++;
            }
            i+=2;
           // j--;
        }
        string take="";
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(ans[i][j]!='\0') take+=ans[i][j];
            }
        }
        return take;




        
    }
};
