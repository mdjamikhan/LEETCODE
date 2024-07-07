class Solution {
public:
    int numWaterBottles(int Bot, int Exc) {

        int sum=Bot;
       while(Bot>=Exc)
        {
            int round=Bot/Exc;
            int rem=Bot%Exc;
            sum+=round;
            Bot=round+rem;
          
          

            
        }
        return sum;


        
    }
};