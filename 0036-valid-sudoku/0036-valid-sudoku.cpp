class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string>st;
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]!='.'){
                    string row=string(1,board[i][j])+"Row"+to_string(i);
                    string col=string(1,board[i][j])+"COL"+to_string(j);
                    string box=string(1,board[i][j])+"BOX"+to_string(i/3)+"-"+to_string(j/3);
                
                    if(st.find(row)!=st.end() ||st.find(col)!=st.end()||st.find(box)!=st.end()) return false;
                

                st.insert(row);
                st.insert(col);
                st.insert(box);
                }
                else continue;

            }
        }
        // for(int i=0;i<9;i++)
        // {
        //     unordered_map<int,int>r;
        //     unordered_map<int,int>c;
        //     unordered_map<int,int>box;
        //     for(int j=0;j<9;j++)
        //     {
        //         if(board[i][j]!='.'){
        //             if(r.find(board[i][j])!=r.end()) return false;

        //             r[board[i][j]]++;
        //         }
        //         if(board[j][i]!='.'){
        //             if(c.find(board[i][j])!=c.end()) return false;
        //             c[board[j][i]]++;
        //         }
        //         int row=3*(i/3);
        //         int col=3*(i%3);
        //         if(board[])



        //     }
           
        // }
        return true;
        
    }
};