class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        int n=nums.size();
       // vector<int>ans;
        int index=0;
        vector<string>ans;
        
        for(int i=1;i<=n;i++)
        {
            if(index==n-1 || nums[i-1]+1!=nums[i]){
                if(index==i-1){
                    ans.push_back(to_string(nums[index]));  
                }
                else{
                    ans.push_back(to_string(nums[index])+"->"+to_string(nums[i-1]));

                }      
                index=i;
            }
        }
       
        return ans;
        
    }
};