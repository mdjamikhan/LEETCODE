class Solution {
public:
void dfs(int start,int end,vector<vector<int>>&image,int color,int n,int m,int val){
    if(start<0 || start>=n ||end<0 || end>=m|| image[start][end]!=val) return ;

        image[start][end]=color;
    
    dfs(start-1,end,image,color,n,m,val);
    dfs(start+1,end,image,color,n,m,val);
    dfs(start,end-1,image,color,n,m,val);
    dfs(start,end+1,image,color,n,m,val);

}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        int n=image.size();
        int m=image[0].size();
        int val=image[sr][sc];
        if(val!=color){

            dfs(sr,sc,image,color,n,m,val);
        }
        return image;

        
    }
};