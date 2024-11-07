class Solution {
public:
    int largestCombination(vector<int>& candi) {

        int maxi=0;
        for(int i=0;i<32;i++)
        {
            int count=0;
            
            for(int it:candi){

                if(it & (1<<i)) count++;
            }
            maxi=max(maxi,count);
        }
        return maxi;
        
    }
};