class Solution {
public:
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
       
        unordered_map<int,vector<int>>adj;
        unordered_map<int,int>indeg,outdeg;
        // vector<int>indeg(n);
        // vector<int>outdeg(n);
        for(auto it:pairs){
            int u=it[0];
            int v=it[1];
            adj[u].push_back(v);
            indeg[v]++;
            outdeg[u]++;
           
        }
        int start=pairs[0][0];
        for(auto it:adj){
            int node=it.first;
            if(outdeg[node]-indeg[node]==1){
                start=node;
                break;
            }
        }
        vector<int>ans;
        stack<int>firstNode;
        firstNode.push(start);
        while(!firstNode.empty()){
            int curr=firstNode.top();
            
            if(!adj[curr].empty()){
                int neigh=adj[curr].back();
                adj[curr].pop_back();
                firstNode.push(neigh);
            }
            else{
                ans.push_back(curr);
                firstNode.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        vector<vector<int>>res;
        for(int i=0;i<ans.size()-1;i++){
            res.push_back({ans[i],ans[i+1]});

        }
        return res;

        
    }
};