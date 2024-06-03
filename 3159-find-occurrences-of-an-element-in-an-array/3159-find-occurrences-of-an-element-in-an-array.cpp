class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        int n=nums.size();
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==x){
                count++;
                mp[count]=i;

            }
        }
        for(int i=0;i<queries.size();i++)
        {
            if(mp.find(queries[i])!=mp.end()){
                queries[i]=mp[queries[i]];
            }
            else{
                queries[i]=-1;
            }
        }
        return queries;
        
    }
};