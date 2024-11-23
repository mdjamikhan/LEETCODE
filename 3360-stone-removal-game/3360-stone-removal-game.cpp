class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10) return false;
        int flag=0;
        int k=10;

        while(n>=k){

          
                n-=k;
                k--;
                flag=!flag;
           


        }
        if(flag) return true;
        return false;

        
    }
};