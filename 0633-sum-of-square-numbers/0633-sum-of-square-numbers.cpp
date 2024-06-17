class Solution {
public:
    bool judgeSquareSum(int c) {
        long long  i=0;
        long long  sum=0;
        long long k=sqrt(c);
      //  if(i<=k) return true;
        while(i<=k){
            sum=pow(i,2)+pow((k),2);
            cout<<sum<<endl;
           

            if(sum>c){
                k--;

            }
            if(sum<c){
                i++;
            }
            if(sum==c) return true;

        }
        return false;

        
    }
};