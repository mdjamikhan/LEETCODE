class Solution {
public:
vector<vector<string>>ans;
    void solve(int col, int n,vector<string>&board ,vector<int>& left,vector<int>&leftdia,vector<int>&rightdia){
        if(col==n){
            ans.push_back(board);
            return;
        }

        for(int row=0;row<n;row++){

            if(left[row]==0 && leftdia[row+col]==0 && rightdia[n-1+col-row]==0){
                board[row][col]='Q';
                left[row]=1;
                leftdia[row+col]=1;
                rightdia[n-1+col-row]=1;
                solve(col+1,n,board,left,leftdia,rightdia);
                board[row][col]='.';
                leftdia[row+col]=0;
                rightdia[n-1+col-row]=0;
                left[row]=0;
                
            }
        }

        



    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }

        
        vector<int> left(n, 0), leftdia(2 * n - 1, 0),rightdia(2 * n - 1, 0);

        solve(0, n, board,left, leftdia, rightdia);
        return ans;
        
    }
};