class Solution {
public:
    int minElement(vector<int>& nums) {
        int maxi=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            string k=to_string(nums[i]);
            int sum=0;
            for(int j=0;j<k.size();j++)
            {
                sum+=(k[j]-'0');

            }
            
            maxi=min(maxi,sum);
            
        }
        return maxi;

        
    }
};