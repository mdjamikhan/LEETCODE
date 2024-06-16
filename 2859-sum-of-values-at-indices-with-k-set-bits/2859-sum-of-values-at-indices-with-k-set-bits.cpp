class Solution {
public:
int solve(int n){
    int count=0;
    int i=0;
    while(n>0){
        int k=n%2;
        n/=2;
        if(k==1){
            count++;
        }

    }
    return count;
}
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            int p=solve(i);
            if(p==k){
                sum+=nums[i];
            }
            p=0;
            // int p=__builtin_popcount(i);
            // if(p==k){
            //     sum+=nums[i];
            // }
            // p=0;
        }
        return sum;
        
    }
};