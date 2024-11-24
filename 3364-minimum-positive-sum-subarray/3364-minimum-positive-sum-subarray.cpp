class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int maxi=INT_MAX;
        int n=nums.size();
    

        for(int i=0;i<n;i++){
            int sum=0;
            int k=0;
            for(int j=i;j<n;j++){
                k++;
                sum+=nums[j];

                if(k>=l && k<=r){
                    if(sum>0){
                    
                    maxi=min(maxi,sum);
                    }

                }
            }

        }

        if(maxi==INT_MAX) return -1;
        return maxi;
        
    }
};