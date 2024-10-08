class Solution {
public:
    int minSwaps(string s) {

        stack<char>st;
        for(char it:s){
            if(it=='['){
                st.push(it);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
        return (st.size()+1)/2;
        
    }
};