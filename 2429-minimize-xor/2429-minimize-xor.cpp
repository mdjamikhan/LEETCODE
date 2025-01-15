class Solution {
public:
    int minimizeXor(int num1, int num2) {

        int ones=__builtin_popcount(num2);
        int mini=num2;
        int val=0;

        for(int i=31;i>=0 && ones>0;i--){
            if(num1 & (1<<i)){
                val|=(1<<i);
                ones--;
            }
        }
        
        for(int i=0;i<32 && ones>0;i++){
            if(!(num1 & (1<<i))){
                val|=(1<<i);
                ones--;
            }
        }
        return val;
          

        
        
    }
};