class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& it, vector<int>& qu) {

        sort(begin(it),end(it));

        vector<pair<int,int>>store;
        store.push_back({it[0][0],it[0][1]});
        for(int i=1;i<it.size();i++){
            if(it[i][0]==store.back().first){
                store.back().second=max(it[i][1],store.back().second);
            }
            else{
                store.push_back({it[i][0],it[i][1]});
            }
        }
        // now main part of this question it basically an edge case of question
        // we have to take maxi of neighbour element;
        for(int i=1;i<store.size();i++){
            store[i].second=max(store[i-1].second,store[i].second);
        }
        vector<int>ans;
        
        for(int it:qu){
            int checkPoint=it;
            int low=0;
            int maxi=0;
            int high=store.size()-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(store[mid].first<=checkPoint){
                    maxi=store[mid].second;
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};