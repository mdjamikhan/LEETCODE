class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<pair<int,int>>store;
        for(int i=0;i<nums1.size();i++){
            store.push_back({nums2[i],nums1[i]});
        }
        sort(store.begin(),store.end(),[](const pair<int,int>&a,const pair<int,int>&b){
            return a.first>b.first;
        });

        priority_queue<int,vector<int>,greater<int>>pq;
        long long sum=0;
        long long maxi=0;

        for(int i=0;i<nums1.size();i++){
            sum+=store[i].second;
            pq.push(store[i].first);
            if(pq.size()==k){
                maxi=max(maxi,sum*pq.top());
                pq.pop();
                sum-=store[i].second;
            }
        }

        return maxi;
        
    }
};