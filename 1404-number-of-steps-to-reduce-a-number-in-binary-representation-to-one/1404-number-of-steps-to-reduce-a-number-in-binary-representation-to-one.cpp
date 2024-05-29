class Solution {
public:
    int numSteps(string s) {
        long long  n=0;
        int count=0;
        for(char it:s){
            n=n*2+(it-'0');
        }
        cout<<n<<endl;
        while(n!=0){
            if(n%2==0){
                if(n==1) break;
                n=n/2;
                count++;
            }
            else if(n%2==1){
                if(n==1) break;
                n=n+1;
                count++;
            }

        }
        return count;
    
        
    }
};