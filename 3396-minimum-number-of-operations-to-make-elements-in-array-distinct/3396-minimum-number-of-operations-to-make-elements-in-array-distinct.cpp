class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        // if(nums.size())
        int n=nums.size();
        int count=0;
        for(int i=0;i<nums.size();){
            unordered_map<int,int>mp;
            
            for(int j=i;j<nums.size();j++){
                mp[nums[j]]++;
            }
            if(mp.size()<n-i){
                 count++;
                 i+=3;
            }

            else if(mp.size()==n-i){
               
                break;

            }
            if(i+3>n){
                count++;
                 break;
            }

           
        }
        return count;
        
    }
};