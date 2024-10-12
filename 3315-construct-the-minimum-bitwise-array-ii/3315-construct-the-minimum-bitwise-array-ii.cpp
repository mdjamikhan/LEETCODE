class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
             //int k=nums[i];
           
            if(nums[i]==2){
                ans.push_back(-1);
                continue;
            }
            
            int count=0;
            int nnn=nums[i];
     
            while((nnn&1)==1){ 
                count++;
                nnn=(nnn>>1);
            }

                // ans.push_back(k-(1<<(count-1)));
                ans.push_back(nums[i]-(pow(2,count-1)));
            
        }
        return ans;

        
    }
};