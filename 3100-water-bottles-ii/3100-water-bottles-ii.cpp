class Solution {
public:
    int maxBottlesDrunk(int b, int e) {
        int sum=b;
        int count=0;
        while(b>=e){
            b-=e;
            count++;
            b+=count;
            e++;

            //  if(b>=e){
            //     count++;
            //     e++;
            // }
                
        }

        return sum+count;
        
    }
};