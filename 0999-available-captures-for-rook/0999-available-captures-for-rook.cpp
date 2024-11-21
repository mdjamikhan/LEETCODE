class Solution {
public:
int count=0;
void solve(int row,int col,vector<vector<char>>& board){
    if(row<8){
        for(int i=row+1;i<8;i++){
            if(board[i][col]=='B') break;
            if(board[i][col]=='p') {
                count++;
                break;
            }
        }
    }
    if(col<8){
        for(int i=col+1;i<8;i++){
            if(board[row][i]=='B') break;
             if(board[row][i]=='p'){
                count++;
                break;
            }
        }
    }
    if(col>0){
        for(int i=col-1;i>=0;i--){
            if(board[row][i]=='B') break;
            if(board[row][i]=='p'){
                count++;
                break;
            }
        }

    }
    if(row>0){
        for(int i=row-1;i>=0;i--){
            if(board[i][col]=='B') break;
            if(board[i][col]=='p'){
                count++;
                break;
            }
        }

    }
}
    int numRookCaptures(vector<vector<char>>& board) {

        int row=-1;
        int col=-1;

        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(board[i][j]=='R'){
                    row=i;
                    col=j;
                    break;
                }
            }
        }
        solve(row,col,board);
        return count;
        
    }
};