class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int k=nums[0];
        int count=0;
        if(k>=n) return 1;
        for(int i=1;i<=n-1;i++)
        {
            
             if(k<=nums[i])
            {
                k=nums[i];
                count++;
            }
          //  else if(k>n) return count;
            else{
                k--;
            }
            
        }
        return count;

        
    }
};