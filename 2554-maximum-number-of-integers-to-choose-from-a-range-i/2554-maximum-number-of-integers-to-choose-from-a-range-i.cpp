class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        sort(banned.begin(),banned.end());
        unordered_map<int,int>mp;
        for(auto it:banned){
            mp[it]++;
        }
        int sum=0;
        int count=0;
        for(int i=1;i<=n;i++){
            if(mp.find(i)==mp.end()){
                sum+=i;
                if(sum<=maxSum) count++;
                
            }
        }
        return count;
        
        
    }
};