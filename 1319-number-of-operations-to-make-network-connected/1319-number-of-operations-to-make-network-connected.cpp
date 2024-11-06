class DisJoint
{

public:
    vector<int> rank, parent, size;
    DisJoint(int n)
    {
        // there is two ways to  do disjoint set rank and size
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
    int makeConnected(int n, vector<vector<int>>& conne) {
        DisJoint dis(n);
        int count=0;

        for(auto it:conne){
            int fir=it[0];
            int sec=it[1];
            if(dis.findPar(fir)!=dis.findPar(sec)){
               
                dis.unionByrank(fir,sec);
            }
            else{
                count++;
            }

        }
        cout<<count<<" ";
        int count1=0;
        for(int i=0;i<n;i++){
            if(dis.parent[i]==i) count1++;
            cout<<dis.parent[i]<<" ";
        }
        int ans=count1-1;
        if(ans>count) return -1;
        return ans;

        
    }
};