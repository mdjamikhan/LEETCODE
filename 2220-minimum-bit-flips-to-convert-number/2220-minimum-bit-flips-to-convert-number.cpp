class Solution {
public:
    int minBitFlips(int start, int goal) {
        return __builtin_popcount(start^goal);
        // int count=0;
        // while(start>0)
        // {
        //     count++;
        //     start=(start&(start+1));
        //     if(start==goal){
        //         break;
        //     }
        // }
        // return count;
        
    }
};