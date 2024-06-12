class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0;
        int o=0;
        int tw=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                z++;
            }
            else if(nums[i]==1)
            {
                o++;
            }
            else
            {
                 tw++;
            }

        }
        for(int i=0;i<nums.size();i++)
        {
            if(i<z) 
                nums[i]=0;
            else if(i<(z+o))    
            {
                nums[i]=1;
            }
            else
            {
                nums[i]=2;
            }
        }
       // sort(nums.begin(),nums.end());
        
    }
};