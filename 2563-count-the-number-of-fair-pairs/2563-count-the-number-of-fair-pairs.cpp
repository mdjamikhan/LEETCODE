class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        //set<pair<int,int>>st;
        long long count=0;
        for(int i=0;i<nums.size();i++){
            int low=i+1;
            int high=nums.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(lower<=nums[mid]+nums[i]){
                    
                    high=mid-1;

                }
                else{
                    low=mid+1;
                }
            }
            int start=low;
            low=i+1;
            high=nums.size()-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(upper>=nums[mid]+nums[i]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            int end=high;
            if(start<=end) count+=(end-start+1);
        }
        return count;
        
    }
};