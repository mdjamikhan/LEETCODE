class Solution {
public:
    bool hasMatch(string s, string p) {
        int ind = p.find("*");
        if (ind == -1)
            return s == p;    
        string newst = p.substr(0, ind);
        string newaft = p.substr(ind + 1);
        int k = s.find(newst);
        int rk = s.rfind(newaft); 

        cout<<k<<" "<<rk;

        if ((k == -1 || rk == -1 ) ) return false;

        //if(k==rk) return false;
        return k+newst.size()<=rk;






        
    }
};