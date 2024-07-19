class Solution {
public:
    int trailingZeroes(int n) {
        int prod=n;
        int num=5;
        int c=1;
        int out=0;
   
        while(n>=num){
            int k=n/num;
            out+=k;
            ++c;
            num=pow(5,c);

        }
        return out;
        
    }
};