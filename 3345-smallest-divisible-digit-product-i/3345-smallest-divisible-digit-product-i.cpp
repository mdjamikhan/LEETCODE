class Solution {
public:
    int smallestNumber(int n, int t) {
        int val=n;
        while(true){

        int prod=1;
        n=val;

        
            while(n!=0){
                int rem=n%10;
                prod*=rem;
                n/=10;
            }
            if(prod%t==0) return val;
            else{
                val=val+1;
                prod=1;
            }
            
        }
        return 0;



        
    }
};