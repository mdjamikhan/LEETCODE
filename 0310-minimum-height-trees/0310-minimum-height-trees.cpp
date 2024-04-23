class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        if(n<=0) return ans;
        if(n==1){
            ans.push_back(0);
            return ans;
        }
        vector<int>deg(n,0);
        vector<vector<int>>gro(n);
        for(auto e:edges)
        {
            deg[e[0]]++;
            deg[e[1]]++;

            gro[e[0]].push_back(e[1]);
            gro[e[1]].push_back(e[0]);

        }
            
        queue<int>q;
        for(int i=0;i<n;i++)
        {
            if(deg[i]==1){
                q.push(i);
            }
        }
        while(n>2){
            int sz=q.size();
            n-=sz;
        
            while(sz>0){
                int ele=q.front();
                q.pop();

                for(auto it: gro[ele]){
                    deg[it]--;
                    if(deg[it]==1){
                        q.push(it);
                    }
                }
                sz--;
            }

            }
    
            while(!q.empty()){
                int ele=q.front();
                q.pop();
                ans.push_back(ele);
            }
        
        return ans;
        
    }
};