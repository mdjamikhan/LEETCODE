class Solution {
public:
    string nearestPalindromic(string n) {
        string p=n;
        int k=stoi(p);
        if(k<=10 || p.size()==1){
            int l=k-1;
            return to_string(l);

        }
        if(k%100==0){
            int p=k-1;
            return to_string(p);
        }
        int size=p.size();
        int  l=size/2;
        string take="";
        string half="";
        if(size%2==0){
             take=p.substr(0,l);
             half=p.substr(0,l);

        }
        else{
             take=p.substr(0,l);
             half=p.substr(0,l+1);
        }

        reverse(take.begin(),take.end());

        half.append(take);
        return half;

        
        
    }
};