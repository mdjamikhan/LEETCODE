class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return true;
        }
        int count=0;
        vector<int>ans;

        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0){
                //count++;
                ans.push_back(0);
            }
            else if(nums[i]%2==1){
               // count--;
                ans.push_back(1);
            }

            // if(count==2){
            //     return false;
            // }
        }
        for(int i=1;i<=n-1;i++){
            if(ans[i]==ans[i-1]){
                return false;
            }

        }
        return true;
    }
};