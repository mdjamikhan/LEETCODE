class Solution {
public:
    int nonSpecialCount(int l, int r) {
        int maxi=sqrt(r);
        vector<int>seive(maxi+1,1);
        seive[1]=0;


        for(int i=2;i<=maxi;i++)
        {
            if(seive[i]==1){
                for(int j=i*i;j<=maxi;j+=i)
                {
                    seive[j]=0;
                }
            }
        }
        int ans=0;
        for(int i=2;i<=maxi;i++){
            if(seive[i]==1){
                int no=i*i;
                if(no>=l && no<=r){
                    ans++;
                }
            }
        }
        return (r-l+1)-ans;
    }
        
};