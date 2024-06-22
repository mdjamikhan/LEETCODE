class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int cont=0;
        vector<int>prefix(n+1,0);
        prefix[0]=1;

        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==1){
                count++;
            }
            if(count>=k){
                cont+=prefix[count-k];
            }
            prefix[count]++;
        }
        return cont;

        
    }
};