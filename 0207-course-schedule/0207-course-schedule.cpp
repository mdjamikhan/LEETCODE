class Solution {
public:
    bool canFinish(int num, vector<vector<int>>& pre) {
        //int n=pre.size();
        vector<vector<int>>adj(num);
        for(int i=0;i<pre.size();i++){
            adj[pre[i][0]].push_back(pre[i][1]);
        }
        vector<int> indeg(num, 0);
        for(int i=0;i<num;i++)
        {
            for(auto it:adj[i]){
                indeg[it]++;
            }
        }
        queue<int>q;
        for(int i=0;i<num;i++)
        {
            if(indeg[i]==0){
                q.push(i);
            }
        }
        int count=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            count++;
            for(auto it:adj[node]){
                indeg[it]--;
                if(indeg[it]==0){
                    q.push(it);
                }
            }
        }
        if(count==num) return true;
        return false;
        
        
    }
};