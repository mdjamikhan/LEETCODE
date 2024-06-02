class Solution {
public:

    int countDays(int days, vector<vector<int>>& m) {
        sort(m.begin(),m.end());
        vector<vector<int>>merge;
        merge.push_back(m[0]);
        for(int i=1;i<m.size();i++){
            if(m[i][0]<=merge.back()[1]){
                merge.back()[1]=max(merge.back()[1],m[i][1]);
            }
            else{
                merge.push_back(m[i]);
            }
        }
        for(vector<int>&it:merge){
            days-=(it[1]-it[0]+1);
        }


        return days;
    }
};