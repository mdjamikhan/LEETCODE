class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>primes={2,3,5};
        priority_queue<long,vector<long>,greater<long>>ugly; 
        unordered_set<long>visited;
        ugly.push(1);
        visited.insert(1);
        long curr=0;
        for(int i=0;i<n;i++)
        {
            curr=ugly.top();
            ugly.pop();
            for(int it:primes){
                long newugly=it*curr;
                if(visited.find(newugly)==visited.end()){
                    ugly.push(newugly);
                    visited.insert(newugly);
                }

            }

        }
        
        return (int)curr;
        
    }
};