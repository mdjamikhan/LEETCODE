class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());

        int l=0;
        int r=nums[n-1]-nums[0];
        while(l<r){
            int mid=l+(r-l)/2;

            int count=0;
            int j=0;
            for(int i=0;i<n;i++)
            {

                while(j<n && nums[j]-nums[i]<=mid){
                    j++;
                }
                count+=j-i-1;
            }
                if(count<k){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }

        

        return l;
       
        
    }
};