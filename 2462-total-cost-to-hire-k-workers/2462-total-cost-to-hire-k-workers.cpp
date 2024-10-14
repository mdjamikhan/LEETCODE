class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candi) {
        priority_queue<int ,vector<int>,greater<int> > pq1 ,pq2;
        long long sum=0;
        int i=0;
        int j=costs.size()-1;
        while(k--){

            while(pq1.size()<candi && i<=j) pq1.push(costs[i++]);
            while(pq2.size()<candi && i<=j) pq2.push(costs[j--]);

            int ra1=pq1.size()>0 ?pq1.top():INT_MAX;
            int rb1=pq2.size()>0?pq2.top():INT_MAX;
            if(ra1<=rb1){
                sum+=ra1;
                pq1.pop();
            }
            else{
                sum+=rb1;
                pq2.pop();
            }

        }
        return sum;
        
    }
};