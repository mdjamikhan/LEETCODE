class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {

        int k=(c1[0]-'a'+1)+(c1[1]-'0') +((c2[0]-'a'+1)+ (c2[1]-'0'));
        if(k%2==0) return true;
        return false;




        
    }
};