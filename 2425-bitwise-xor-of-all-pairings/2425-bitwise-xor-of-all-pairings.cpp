class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,long>mp;
        int res=0;
        int n=nums1.size();
        int m=nums2.size();
        
        
        for(int i=0;i<nums1.size();i++){
           mp[nums1[i]]+=m;
            
        }

        for(int j=0;j<nums2.size();j++){
            mp[nums2[j]]+=n;
        }
        for(auto it:mp){
            if(it.second%2==1){
                res^=it.first;

            }
        }
      //  if(mp.size()==nums1.size()+nums2.size()) return 0;
       
        return res;
        
    }
};