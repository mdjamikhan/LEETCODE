class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            bool notfound=true;
            for(int j=1;j<nums[i];j++)
            {
                int k=j|j+1;
                if(k==nums[i]){
                    ans.push_back(j);
                    notfound=false;
                    
                    break;
                }

            }
            if(notfound) ans.push_back(-1);
        }
        return ans;
        
    }
};