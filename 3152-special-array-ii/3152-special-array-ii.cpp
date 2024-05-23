class Solution {
public:

void solve(int i,int j,vector<int>&nums,vector<bool>&ans)
{
    //vector<int>ans;
    for(int s=i+1;s<=j;s++)
    {
        if(nums[s]%2==nums[s-1]%2)
        {
            ans.push_back(false);
            return;
        }
    }
   
    ans.push_back(true);
    
}
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        int n=queries.size();
        vector<bool>ans;
        for(int i=0;i<n;i++)
        {
            solve(queries[i][0],queries[i][1],nums,ans);
        }

        return ans;
       


        
        
    }
};