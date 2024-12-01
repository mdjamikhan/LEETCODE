class Solution {
public:
    int smallestNumber(int n) {
        string ans="";
        while(n!=0){
            int k=n%2;
            if(k==0){
                ans=to_string(1)+ans;
            }
            else{
                ans=to_string(1)+ans;
            }
            n/=2;
        }
        int value=stoi(ans,nullptr,2);
        cout<<ans;
        return value;
        
    }
};