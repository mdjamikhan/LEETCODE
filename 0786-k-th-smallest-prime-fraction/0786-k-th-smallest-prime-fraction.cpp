class Solution {
public:
typedef vector<double>V;
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<V,vector<V>,greater<V>>pq;
        int n=arr.size(); 
        for(int i=0;i<n;i++)
        {
            pq.push({1.0*arr[i]/arr[n-1],(double)i,(double)n-1});
        }
        int smallest=1;
        while(smallest<k){
            V val=pq.top();
            pq.pop();
            int i=val[1];
            int j=val[2]-1;

            pq.push({1.0*arr[i]/arr[j],(double)i,(double)j});
            smallest++;
        }

        V vec=pq.top();
        int i=vec[1];
        int j=vec[2];
        return {arr[i],arr[j]};
        
    }
};