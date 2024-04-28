class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int sum1=0;
        int sum2=0;
        for(int i=0;i<n;i++)
        {
            sum1+=nums1[i];
            sum2+=nums2[i];

        }
        if(sum1>sum2){
            return (-1)*(sum1-sum2)/n;
        }
        return (sum2-sum1)/n;
        
    }
};