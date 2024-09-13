class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& qu) {
        vector<int>ans;
        vector<int>store(arr.size());
        store[0]=arr[0];
        for(int i=1;i<arr.size();i++)
        {
            store[i]=store[i-1]^arr[i];

            
        }
        for(int i=0;i<qu.size();i++)
        {
            int left=qu[i][0];
            int right=qu[i][1];
            if(left==0){
                ans.push_back(store[right]);
            }
            else{
                ans.push_back(store[right]^store[left-1]);
            }

        }
        return ans;
        
    }
};