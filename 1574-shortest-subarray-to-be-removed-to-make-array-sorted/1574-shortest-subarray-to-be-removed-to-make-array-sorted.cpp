class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        stack<int>st;
        int count=0;
        for(int i=0;i<arr.size();i++){
            while(!st.empty() && arr[st.top()]>arr[i]){
                st.pop();
                count++;

            }
            st.push(i);
        }
        return count;



        
    }
};