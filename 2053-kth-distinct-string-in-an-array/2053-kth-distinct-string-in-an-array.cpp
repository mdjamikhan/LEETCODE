class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string a="";
        unordered_map<string,int>mp;
        for(auto &it:arr){
            mp[it]++;
        }
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
           
            if(mp[arr[i]]==1){
                count++;
                if(count==k) a= arr[i];
            }
        }
        return a;

        
    }
};