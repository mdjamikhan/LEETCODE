class Solution {
public:
double mod=1e5;
    double averageWaitingTime(vector<vector<int>>& customers) {
        int waitingTime=0;
        double store=0;
        int n=customers.size();
       waitingTime=customers[0][0]+customers[0][1];
        store=waitingTime-customers[0][0];

        for(int i=1;i<n;i++)
        {
            if(waitingTime<customers[i][0]){
                waitingTime=customers[i][0]+customers[i][1];
            }
            else{
                waitingTime+=customers[i][1];
            }
            store+=waitingTime-customers[i][0];
        }

        double size=n;

         return static_cast<double>(store) / n;





    
        
    }
};