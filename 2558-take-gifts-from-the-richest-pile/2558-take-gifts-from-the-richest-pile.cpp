class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
    
        priority_queue<int>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        long long sum=0;
        while(k!=0){
            int  p=pq.top();
            pq.pop();
            pq.push(sqrt(p));
            k--;

        }
        while(!pq.empty()){
            sum+=pq.top();
            pq.pop();
        }
        return sum;
        
    }
};