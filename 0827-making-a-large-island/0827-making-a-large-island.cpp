class DisJoint
{

public:
    vector<int> rank, parent, size;
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
        else
        {
            parent[ulp_v] = ulp_u; // Corrected parent relationship
            size[ulp_u] += size[ulp_v]; // Corrected size update
        }
    }
};

class Solution {
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        DisJoint ds(n * n);

        queue<pair<int,int>> q;
        int deltaR[] = {-1, 0, 1, 0};
        int deltaC[] = {0, 1, 0, -1};
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) {
                    continue;
                }
                else{
                    for(int k=0;k<4;k++)
                    {
                        int nrow=i+deltaR[k];
                        int ncol=j+deltaC[k];
                        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n) {
                            if(grid[nrow][ncol]==1){
                                int node=i*n+j;
                                int adjNode=nrow*n+ncol;
                                ds.unionBysize(node,adjNode);

                            }
                        }

                    }

                }
            }
        }
        int maxi=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1) continue;
                set<int>compo;
                
                for(int k=0;k<4;k++)
                {
                    int nrow=i+deltaR[k];
                    int ncol=j+deltaC[k];
                    if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < n) {
                        if(grid[nrow][ncol]==1){
                            int node=i*n+j;
                            int adjNode=nrow*n+ncol;
                            compo.insert(ds.findPar(nrow*n+ncol));
                        }
                    }
                }

                int total=1;
                for(auto it:compo){
                    total+=ds.size[it];
                }
                maxi=max(maxi,total);   
            }
        }
        for(int cel=0;cel<n*n;cel++)
        {
            maxi=max(maxi,ds.size[ds.findPar(cel)]);

        }
        return maxi;
    }
};
