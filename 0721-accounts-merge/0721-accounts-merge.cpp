
class DisJoint
{
    vector<int> rank, parent, size;

public:
    DisJoint(int n)
    {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++)
        {
            parent[i] = i;
        }
    }
    int findPar(int node)
    {
        if (node == parent[node])
            return node;

        return parent[node] = findPar(parent[node]);
    }
    void unionByrank(int u, int v)
    {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
            return;

        if (rank[ulp_u] < rank[ulp_v])
        {
            parent[ulp_u] = ulp_v;
        }
        else if (rank[ulp_u] > rank[ulp_v])
        {
            parent[ulp_v] = ulp_u;
        }
        else
        {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }
    void unionBysize(int u, int v)
    {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
            return;
        if (size[ulp_u] < size[ulp_v])
        {
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
        else if (size[ulp_u] > size[ulp_v])
        {
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};

class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& acc) {
        DisJoint ds(acc.size());
        unordered_map<string,int>mp;
        for(int i=0;i<acc.size();i++){
            for(int j=1;j<acc[i].size();j++)
            {
                string det=acc[i][j];
                if(mp.find(det)==mp.end()){
                    mp[det]=i;
                }
                else{
                    ds.unionByrank(i,mp[det]);
                }

            }
        }
        vector<string> saving[acc.size()];
        for(auto it:mp){
            string data=it.first;
            int node=ds.findPar(it.second);
            saving[node].push_back(data);
        }

        vector<vector<string>>totalAns;
        for(int i=0;i<acc.size();i++){
            if(saving[i].size()==0) continue;
            sort(saving[i].begin(),saving[i].end());
            vector<string>valueTake;
            valueTake.push_back(acc[i][0]);
            for(auto it:saving[i]){
                valueTake.push_back(it);
            }
            totalAns.push_back(valueTake);
        }
        return totalAns;   
    }
};