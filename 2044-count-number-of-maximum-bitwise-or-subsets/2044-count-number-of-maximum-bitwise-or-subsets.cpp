class Solution {
public:
int count=0;
void solve(int i,int newbit,vector<int>&nums,int sum){
    if(sum==newbit){
         count++;
         
    }
    for(int j=i;j<nums.size();j++){
       // sum|=nums[j];
        solve(j+1,newbit,nums,sum|nums[j]);
    }
}
    int countMaxOrSubsets(vector<int>& nums) {
        int n=nums.size();
        int newbit=0;
        for(int i=0;i<n;i++)
        {
            newbit|=nums[i];
        }

        solve(0,newbit,nums,0);
       

        return  count;
        
    }
};