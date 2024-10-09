class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0;
        for(auto it:s){
            if(it=='(') count++;

            else if(it==')') count--;

        }
        if(count<0) return -count;
        return count;
        
    }
};