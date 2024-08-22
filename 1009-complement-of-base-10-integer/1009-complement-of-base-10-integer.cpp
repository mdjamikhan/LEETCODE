class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        string k="";
        while(n>=1){
            if(n&1){
                k="0"+k;
            }
            else{
                k="1"+k;
            }
            n/=2;
        }

        
        int p=stoi(k,nullptr,2);
        return p;

        
    }
};