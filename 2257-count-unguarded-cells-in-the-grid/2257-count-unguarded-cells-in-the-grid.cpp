class Solution {
public:
void checkvalue(int row,int col,int n,int m,vector<vector<int>>&mat){

    
    for(int i=row+1;i<m;i++){
        if(mat[i][col]==1 || mat[i][col]==2) break;
        mat[i][col]=3;
    }
    if(row>0){
        for(int i=row-1;i>=0;i--){
            if(mat[i][col]==1 || mat[i][col]==2) break;
            mat[i][col]=3;
        }
    }
    for(int i=col+1;i<n;i++){
        if(mat[row][i]==1 || mat[row][i]==2) break;
        mat[row][i]=3;
    }
    if(col>0){
        for(int i=col-1;i>=0;i--){
            if(mat[row][i]==1 || mat[row][i]==2) break;
            mat[row][i]=3;
        }
    }
}
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>>mat(m,vector<int>(n,0));
    


        for(int i=0;i<guards.size();i++){   
            int row=guards[i][0];
            int col=guards[i][1];
            mat[row][col]=1;
        
        }

        for(int i=0;i<walls.size();i++){
            int row=walls[i][0];
            int col=walls[i][1];
            mat[row][col]=2;

        }

        for(int i=0;i<guards.size();i++){
            checkvalue(guards[i][0],guards[i][1],n,m,mat);
        }
        int maxi=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    maxi+=1;
                }
            }
        }
        return maxi;








        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
                
        //     }
        // }

        
    }
};