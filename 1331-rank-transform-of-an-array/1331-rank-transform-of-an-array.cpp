class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans=arr;
        int n=arr.size();
        map<int,int>mp;
        sort(ans.begin(),ans.end());
        mp[ans[0]]=1;
        int k=1;
        for(int i=1;i<=n-1;i++)
        {
            if(ans[i]==ans[i-1]){
                mp[ans[i]]=k;
            }
            else{
                mp[ans[i]]= ++k;
               // k=i;
                

                
            }

        }
        vector<int>res;
        for(int it:arr){
            res.push_back(mp[it]);

        }
        return res;
        
        
    }
};