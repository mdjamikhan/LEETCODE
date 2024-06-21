class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int k) {
        int n=customers.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(grumpy[i]==0){

                sum+=customers[i];
            }
        }
        for(int i=0;i<k;i++)
        {
            if(grumpy[i]==1){
                sum+=customers[i];
            }   
        }
        int maxi=sum;
        for(int i=k;i<n;i++)
        {
            if( grumpy[i-k]==1){
                sum-=customers[i-k];
            }
            if(grumpy[i]==1){
                sum+=customers[i];
            }
            maxi=max(maxi,sum);
        }
        return maxi;
        
    }
};