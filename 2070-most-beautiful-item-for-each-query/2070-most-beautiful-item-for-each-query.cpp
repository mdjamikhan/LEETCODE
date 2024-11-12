class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& it, vector<int>& qu) {


   sort(it.begin(), it.end());
//    sort(qu.begin(), qu.end());
    vector<pair<int, int>> store;
    store.push_back({it[0][0],it[0][1]});

    for (int i = 1; i < it.size(); i++) {  
        if (it[i][0] == store.back().first) {
            if (it[i][1] > store.back().second) {
                store.back().second=max(it[i][1],store.back().second);
            }
        } else {
            store.push_back({it[i][0], it[i][1]});
        }
    }
    vector<int>ans;
    // for (int i = 0; i < store.size(); i++) {
    //     cout << store[i].first << " " << store[i].second << endl;
    // }

    for(int i=0;i<qu.size();i++){
        int maxi=0;
        int checkPoint=qu[i];
        for(auto it:store){
            if(checkPoint>=it.first){
                maxi=max(maxi,it.second);
            }
            else{
                break;
            }
        }
        ans.push_back(maxi);
        
    }
    return ans;
            


        
    }
};