class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {
        int n=positions.size();
        stack<int>st;
        vector<pair<int,int>>store;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            store.push_back({positions[i],i});
        }
        sort(store.begin(),store.end(),greater<>());

        for(auto [pos,i]:store){
            if(directions[i]=='L'){
                st.push(i);
            }
            else{
                while(!st.empty() && healths[st.top()]<healths[i]){
                    healths[i]--;
                    st.pop();
                   // st.push(healths[i]);
                }
                 if(!st.empty() && healths[st.top()]==healths[i]){
                    st.pop();
                }
                else if(!st.empty() && healths[st.top()]>healths[i]){
                    healths[st.top()]--;

                }
                else{
                    ans.push_back(i);
                }
            }
        }


        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(),ans.end());
        vector<int>res;
        for(int it:ans){
            res.push_back(healths[it]);
            //st.pop();

        }
        return res;
       

        
    }
};