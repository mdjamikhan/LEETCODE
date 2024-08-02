class Solution {
public:
    int minSwaps(vector<int>& nums) {
        vector<int>ans(nums.begin(),nums.end());
        ans.insert(ans.end(),nums.begin(),nums.end());

        int size=count(nums.begin(),nums.end(),1);
        int mini=INT_MAX;
        int n=ans.size();

        int zero=0;


        for(int i=0;i<size;i++)
        {
            if(nums[i]==0) zero++;
        }
        mini=min(mini,zero);
        for(int i=size;i<n;i++)
        {
            if(ans[i-size]==0) zero--;

            if(ans[i]==0) zero++;  
        mini=min(mini,zero);
        }
        return mini;

        
    }
};