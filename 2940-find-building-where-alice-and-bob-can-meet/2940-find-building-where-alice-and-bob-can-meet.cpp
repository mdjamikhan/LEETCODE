class Solution {
public:
int searchind(int num,int index,vector<pair<int,int>>&st){
    int ind=INT_MAX;
    for(auto [value,i]:st){
        if(value<=num) break;
        if(i>=index) ind=min(ind,i);
    }
    return ind==INT_MAX?-1:ind;
}
    vector<int> leftmostBuildingQueries(vector<int>& heights, vector<vector<int>>& queries) {

        vector<pair<int,int>>st;
        for(int i=1;i<heights.size();i++){
            if(heights[i-1]<heights[i]) st.push_back({heights[i],i});

        }
        sort(st.rbegin(),st.rend());
        vector<int>ans;

        int n=queries.size();

        for(auto it:queries){
            int alic=it[0];
            int bob=it[1];
            if(alic==bob) ans.push_back(alic);

            else{
                int alicval=heights[alic],bobval=heights[bob];
                int index=max(alic,bob);
                int valueall=max(alicval,bobval);

                if(alic>bob && alicval>bobval)ans.push_back(alic);

                else if(bob>alic && alicval<bobval) ans.push_back(bob);

                else{
                    ans.push_back(searchind(valueall,index,st));
                }

            }
        }
        return ans;

        
    }
};