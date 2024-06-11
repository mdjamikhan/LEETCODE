class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr1[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<m;i++)
        {
            while(mp[arr2[i]]!=0){
                ans.push_back(arr2[i]);
                mp[arr2[i]]--;

            }

        }
        vector<int>more;
        for(int i=0;i<n;i++)
        {
            while(mp[arr1[i]]!=0){
                more.push_back(arr1[i]);
                mp[arr1[i]]--;

            }
        }
        sort(more.begin(),more.end());
        int k=more.size();
        int i=0;
        while(i!=k){
            ans.push_back(more[i]);
            i++;
        }
        return ans;
        
    }
};