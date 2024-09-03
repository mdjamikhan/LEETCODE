class Solution {
public:
    int sumBase(int n, int k) {
        int sum=0;
        int i=0;

        while(n>0){
            int rem=n%k;
            sum+=rem*(pow(10,i));
            i++;
            n/=k;
        }
        int res=0;
        while(sum>0){
            res+=(sum%10);
            sum/=10;

        }
        cout<<sum;
        return res;
        
    }
};