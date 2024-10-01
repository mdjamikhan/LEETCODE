class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {

        vector<int>mp(k,0);
        int i=0;
        int n=arr.size();
        for(int it:arr){
            int t=((it%k)+k)%k;
           // if(t<0) rem+=k;
            mp[t]++;

        }
        if(mp[0]%2!=0) return false;
        for(int i=1;i<=k/2;i++)
        {
                if(mp[i]!=mp[k-i]) return false;
        }
        return true;



        
    }
};