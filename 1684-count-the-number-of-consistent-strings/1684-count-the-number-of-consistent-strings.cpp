class Solution {
public:

    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char>st(allowed.begin(),allowed.end());
        int count=0;

        for(string word:words){
            int check=1;

            for(char it:word){
                if(st.find(it)==st.end()){
                    check=0;
                    
                }
            }
            count+=check;
        }
        return count;

       
       
        

        



        
    }
};