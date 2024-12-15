#include <vector>
#include <unordered_map>
#include <numeric> // For std::gcd
using namespace std;

class DisJoint {
    vector<int> rank, parent, size;

public:
    DisJoint(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize(n + 1, 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findPar(int node) {
        if (node == parent[node])
            return node;
        return parent[node] = findPar(parent[node]); // Path compression
    }

    void unionByrank(int u, int v) {
        int ulp_u = findPar(u);
        int ulp_v = findPar(v);

        if (ulp_u == ulp_v)
            return;

        if (rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        } else if (rank[ulp_u] > rank[ulp_v]) {
            parent[ulp_v] = ulp_u;
        } else {
            parent[ulp_u] = ulp_v;
            rank[ulp_v]++;
        }
    }
};

class Solution {
public:
    int countComponents(vector<int>& nums, int threshold) {
        DisJoint ds(threshold);

        // here we simple take a lcm of number

        for (int i = 0; i < nums.size(); i++) {
            if(nums[i]<=threshold){
                for(int j=nums[i];j<=threshold;j+=nums[i]){
                    ds.unionByrank(nums[i],j);
                }
            }
        }


        set<int>st;
        int ans=0;

        for (int num : nums) {
            if(num>threshold) ans++;
            
            else st.insert(ds.findPar(num));
        }
        return st.size()+ans;
    }
};
