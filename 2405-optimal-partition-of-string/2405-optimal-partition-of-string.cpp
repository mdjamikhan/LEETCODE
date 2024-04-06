class Solution {
public:
    int partitionString(string s) {
        int n=s.size();
        int count=1;
        set<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.find(s[i])!=st.end()){
                st.clear();
                count++;
            }
            st.insert(s[i]);

        }
        return count;
        

        
    }
};