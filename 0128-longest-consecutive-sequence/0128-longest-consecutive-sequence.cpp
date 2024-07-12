class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int maxi=0;

        set<int>mp(nums.begin(),nums.end());
        for(int it:mp){
            cout<<it<<" ";
        }

        for(int i=0;i<nums.size();i++)
        {
                if(mp.find(nums[i]-1)==mp.end()){
                int count=1;
                int data=nums[i];
                while(mp.find(data+1)!=mp.end()){
                    count++;
                    data++;
                }
                maxi=max(count,maxi);
            }
        }
        return maxi;

        
    }
};