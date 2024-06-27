class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        int k=0;
        if(edges[0][1]==edges[1][0] )return edges[0][1];
        return edges[1][1];

        // unordered_map<int,int>mp;
        
        // for(auto it:edges)
        // {
        //     mp[it[0]]++;
        //     mp[it[1]]++;


        // }
        // int maxi=0;
        // for(auto it:mp){
        //     if(it.second>maxi){
        //         maxi=it.second;
        //         k=it.first;
        //     }

        // }
        return k;
        
    }
};