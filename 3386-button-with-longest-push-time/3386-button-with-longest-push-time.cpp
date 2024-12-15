class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int ans=events[0][1];
        int ind=events[0][0];
        for(int i=1;i<events.size();i++){
            if(ans<=events[i][1]-events[i-1][1]){
                //ind=events[i][0];
                ind=min(ind,events[i][0]);
                ans=events[i][1]-events[i-1][1];

            }
        }
        return ind;
        
    }
};