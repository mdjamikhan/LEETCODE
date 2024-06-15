class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital){
        int n=profits.size();
        vector<pair<int,int>>store;

        for(int i=0;i<n;i++)
        {
            store.emplace_back(capital[i],profits[i]);
        }
        sort(store.begin(),store.end());
        priority_queue<int>maxi;
        int j=0;
 
        for(int i=0;i<k;++i)
        {
            while(j<n && store[j].first<=w){
                maxi.push(store[j].second);
                j++;

            }
            if(maxi.empty()){
                break;
            }
            w+=maxi.top();
            maxi.pop();


        }
        return w;
    
    }
};