class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        if(k==1) return nums;
        if(n==1) return {nums[0]};
        for(int i=0;i<nums.size()-k+1;i++){
         
            int cnt=0;
            int flag=1;
            
            for(int j=i;j<min(i+k,n);j++){
                if(j==0){
                    cnt++;
                    continue;
                }
                if(cnt==0){cnt++;}
                else if(cnt>0 && nums[j]!=nums[j-1]+1){
                   flag=0;
                    break;
                }
            }
            if(flag) ans.push_back(nums[i+k-1]);
            else{
                ans.push_back(-1);
            }

        }
        return ans;


            
        
    }
};