class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        unordered_map<int,int>mp;
        int n=nums1.size();
        int m=nums2.size();
        int i=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<m;i++)
        {
          
            if(mp.find(nums2[i])!=mp.end() && mp[nums2[i]]>0){
                ans.push_back(nums2[i]);
                mp[nums2[i]]--;
            }
        }
        return ans; 
    }
};