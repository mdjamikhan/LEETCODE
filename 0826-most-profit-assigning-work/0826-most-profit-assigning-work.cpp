class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int n=difficulty.size();
        int m=worker.size();
        vector<pair<int,int>>store(n);
        for(int i=0;i<n;i++)
        {
            store.push_back({difficulty[i],profit[i]});
        }
        int maxiSum=0;
        int sum=0;
   
        int j=0;
        sort(store.begin(),store.end());
        sort(worker.begin(),worker.end());
        for(int i=0;i<worker.size();i++)
        {
            while(j<store.size() && store[j].first<=worker[i]){
                maxiSum=max(maxiSum,store[j].second);
                j++;
            }
            sum+=maxiSum;
        }
        return sum;
        
    }
};