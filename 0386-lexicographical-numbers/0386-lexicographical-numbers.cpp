class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<int>ans;
        int pre=1;
        for(int i=1;i<=n;i++)
        {
            ans.push_back(pre);

            if(pre*10<=n){
                pre=pre*10;
            }
            else{
                while(pre%10==9 || pre+1>n){
                    pre=pre/10;
                }
                pre++;
            }

        }
       

        
        return ans;
        
    }
};