class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int row, int col, int rstart, int cstart) {
        vector<vector<int>>ans;



        int count=0;
        int height=1;
        int width=1;
        int total=row*col;

        
      //  ans.push_back({rstart,cstart});
        while(count<total){
            //right me jane ke leye
            for(int i=0;i<width;i++)
            {
                if(rstart>=0 && rstart<row && cstart>=0 && cstart<col){
                    ans.push_back({rstart,cstart});
                    count++;
                }
                ++cstart;
                
            }
            width++;
            for(int i=0;i<height;i++)
            {
                // niche jaane ke leye
                if(rstart>=0 && rstart<row && cstart>=0 && cstart<col){
                    ans.push_back({rstart,cstart});
                    count++;
                }
                ++rstart;
            }
            height++;

            for(int i=0;i<width;i++)
            {
                //left me jaane ke leye
                if(rstart>=0 && rstart<row && cstart>=0 && cstart<col){
                    ans.push_back({rstart,cstart});
                    count++;
                }
                --cstart;
            }
            width++;
            for(int i=0;i<height;i++)
            {
                //upar jaane ke leye
                if(rstart>=0 && rstart<row && cstart>=0 && cstart<col){
                    ans.push_back({rstart,cstart});
                    count++;
                }
                --rstart;
            }
            height++;

        }
        return ans;
        
    }
};