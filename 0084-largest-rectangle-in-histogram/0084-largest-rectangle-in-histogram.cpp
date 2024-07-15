class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int n=heights.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            
            while(!st.empty() && heights[st.top()]>heights[i]){
                int heigh=heights[st.top()];
                st.pop();
                int start=st.empty()?-1:st.top();
                int widht=i-start-1;
                sum=max(sum,widht*heigh);
            }
        st.push(i);
        }
        while(!st.empty()){
            int heigh=heights[st.top()];
            st.pop();
            int start=st.empty()?-1:st.top();
            int width=heights.size()-start-1;
            sum=max(sum,heigh*width);
        }
        return sum;
    }
};