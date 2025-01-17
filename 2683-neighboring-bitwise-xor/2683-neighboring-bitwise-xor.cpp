class Solution {
public:
// solving on another account id-> NIGHTWINGS
    bool doesValidArrayExist(vector<int>& d) {
        if(d.size()==1){
            if(d[0]==1) return false;
            return true;
        }
        if(d.size()==2){
            if(d[0]==d[1]) return true;
            return false;
        }
        vector<int>ans;
        if(d[0]==1){
            ans.push_back(0);
            ans.push_back(1);
        }
        else{
            ans.push_back(0);
            ans.push_back(0);
        }
        for(int i=1;i<d.size();i++){
            if(i<d.size()-1 && d[i]==1){
                if(ans[i]==1)ans.push_back(0);
                else ans.push_back(1);

            }
            else if(i<d.size()-1 && d[i]==0){
                if(ans[i]==1) ans.push_back(1);
                else ans.push_back(0);
            }
            else if(i==d.size()-1){
                if(d[i]==0){
                    if(ans[i]!=ans[0]) return false;
                }
                else if(d[i]==1) if(ans[i]==ans[0]) return false;
            }

        }
        return true;     
    }
};