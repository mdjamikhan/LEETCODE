class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);

        }
        long long ans=0;
        while( k>0){
            int p=pq.top();
            pq.pop();
            ans+=p;
            cout<<ans<<" "<<p<<endl;
            pq.push(ceil(p/3.0));
           
            k--;
           

        }
        return ans;   
    }
};