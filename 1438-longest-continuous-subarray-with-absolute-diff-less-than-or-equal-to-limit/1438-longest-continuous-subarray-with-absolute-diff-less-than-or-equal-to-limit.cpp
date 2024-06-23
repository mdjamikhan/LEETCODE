class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        multiset<int> mul;
        int j=0;
        int count=1;
        for(int i=0;i<nums.size();i++){
            mul.insert(nums[i]);
            while(abs(*mul.begin()-*mul.rbegin())>limit){
                mul.erase(mul.find(nums[j]));
                j++;
            }

            count=max(count,i-j+1);
        }
        return count;
    }
};