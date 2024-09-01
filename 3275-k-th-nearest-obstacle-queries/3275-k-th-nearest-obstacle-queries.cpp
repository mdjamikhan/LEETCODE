class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& q, int k) {
        priority_queue<int>ans;
        vector<int>res;
        int n=q.size();

        for(int i=0;i<n;i++)
        {
            ans.push(abs(q[i][0])+abs(q[i][1]));
            if(ans.size()<k){
               //ans.pop();
                res.push_back(-1);
            }
            else{
                if(ans.size()==k){
                    res.push_back(ans.top());
                }
                else{
                    ans.pop();
                    res.push_back(ans.top());
                }
            }
            
        }
        return res;
    }
};