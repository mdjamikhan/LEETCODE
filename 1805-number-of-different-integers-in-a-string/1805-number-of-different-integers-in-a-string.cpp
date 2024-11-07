class Solution {
public:
    int numDifferentIntegers(string word) {
        set<string>st;
        int i=0;
        while(i<word.size()){
            if(isdigit(word[i])==false){
                i++;
                continue;
            }
            string take="";
            while(i<word.size() && isdigit(word[i])){
                take+=word[i];
                i++;
            }
            int j=0;
            while(j<take.size() && take[j]=='0'){
                j++;
            }
            take=take.substr(j);
            st.insert(take);
        }
        return st.size();
        



        
    }
};