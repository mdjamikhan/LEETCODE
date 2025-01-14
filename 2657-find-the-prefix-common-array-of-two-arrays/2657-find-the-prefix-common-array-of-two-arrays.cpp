class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<B.size();i++)
        {
            mp[A[i]]++;
            mp[B[i]]++;
            int count=0;

            for(int j=0;j<=i;j++){
                if(mp[A[j]]==1) continue;

                else count++;
            }
            ans.push_back(count);

            
        }
        return ans;
        
    }
};