class Solution {
public:
    int findKthNumber(int n, int k) {
       int lexi=1;
        long long ans=0;
        
        k--;
        while(k>0)
        {
            long long count=0,first=lexi,last=lexi+1;
            while(first<=n){//equal because if n=10 then it will count 2;
               count += min((long long)n + 1, last) - first;
                first*=10;
                last*=10;
            }
            if(count<=k){
                lexi++;
                k-=count;
            }
            else{
                lexi *= 10;
                k--; 
            }
          

        }
        return lexi;
        
    }
};