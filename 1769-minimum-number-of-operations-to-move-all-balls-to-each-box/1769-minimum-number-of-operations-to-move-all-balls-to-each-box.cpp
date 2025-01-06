class Solution {
public:
    vector<int> minOperations(string box) {
        int n=box.size();
        vector<int>ans(n);
        int left=0,right=0,moveleft=0,moveright=0;
        for(int i=0;i<n;i++){
           ans[i]+=moveleft;
           left+=box[i]-'0';
           moveleft+=left;

           int j=n-i-1;
           ans[j]+=moveright;
           right+=box[j]-'0';
           moveright+=right;
           
            

        }
        return ans;
        
    }
};