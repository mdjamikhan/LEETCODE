class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        double diff=1000;
        int count=0;
        int j=nums.size()-1;
        while(i<j){

            double k=(nums[j]+nums[i])/2.0;
            cout<<k<<endl;
            i++;
            j--;
            diff=min(diff,k);
            count++;

            if(count==nums.size()/2) break; 
        }
        return diff;
        
    }
};