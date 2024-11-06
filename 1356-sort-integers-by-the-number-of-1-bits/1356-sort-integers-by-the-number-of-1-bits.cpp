class Solution {
public:
    int one(int n) {
        int count = 0;
        while (n != 0) {
            count += n & 1;  
            n >>= 1;        
        }
        return count;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>>ans;
        for(int i=0;i<arr.size();i++){
            ans.push_back({arr[i],one(arr[i])});
        }
        sort(ans.begin(),ans.end(),[](const pair<int,int> &a, const pair<int,int>&b){
            if (a.second == b.second)
                return a.first < b.first;
            return a.second < b.second;
        });
        vector<int>ans1;
        for(int i=0;i<ans.size();i++){
            ans1.push_back(ans[i].first);
        }
        return ans1;

        
    }
};