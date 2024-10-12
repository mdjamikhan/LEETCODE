class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {

        priority_queue<int,vector<int>,greater<int>>pq;

        sort(intervals.begin(),intervals.end());


        for(auto it:intervals){
            if(!pq.empty() && pq.top()<it[0]){
                pq.pop();
            }

            pq.push(it[1]);

          
        }
        return pq.size();
        
    }
};