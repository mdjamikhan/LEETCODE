class Solution {
public:
    int minFlips(int a, int b, int c) {   
        unsigned int count=0 ;

        while(a!=0 || b!=0 ||c!=0){
            if((c&1)==1){
                if((a&1)==0 && (b&1)==0){
                    count++;
                }
                
            }
            if((c&1)==0){
                if((a&1)==1 && (b&1)==1){
                    count+=2;
                }
            }
            // if((c&1)==1){
            //     if((a&))
            // }
            a>>=1;
            b>>=1;
            c>>=1;
        }
        return count;


    }
};