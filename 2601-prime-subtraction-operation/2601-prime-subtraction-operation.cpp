class Solution {
public:
int length=1000;
    bool primeSubOperation(vector<int>& nums) {
        vector<bool>seive(length,true);
        seive[0]=seive[1]=false;
        for(int i=2;i<=length;i++)
        {
             if(seive[i]){
                for(int j=i*i;j<=length;j+=i){
                    seive[j]=false;
                }
            }

        }
        vector<int>value(length);
        for(int i=0;i<length;i++){
            if(seive[i]){
                value.push_back(i);

            }
        }
        int prev=0;

        for(int num:nums){
            auto it=lower_bound(value.begin(),value.end(),num-prev);
            int check=it-value.begin()-1;

            if(check!=-1){
                num-=value[check];
            }
            if(num<=prev) return false;
            prev=num;
        }
        return true;
    }
};