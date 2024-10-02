class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int>ans;
        sort(nums.begin(),nums.end());
        int left=0;
        int  right=nums.size()-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(nums[mid]==target){
                 int final=mid-1;
                while(final>=left && nums[final]==target){
                    ans.push_back(final);
                    final--;
                 }
                ans.push_back(mid);
                final=mid+1;
                while(final<=right && nums[final]==target){
                    ans.push_back(final);
                    final++;
                 }
                 sort(ans.begin(),ans.end());
                 return ans;
                 
            }


            else if(nums[mid]>target){
                right=mid-1;
            }
            else{
                left=mid+1;

            }
       }
       return {};
        
    }
};