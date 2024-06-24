class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(n,0);
        int count=0;
        int flip=0;
        for(int i=0;i<n;i++)
        {
            if(i>=k){
                flip^=ans[i-k];
            }
            if(flip==nums[i]){
                if(i+k>n) return -1;
            
            flip^=1;
            ans[i]=1;
            count++;
            }
        }
        return count;
        
    }
};