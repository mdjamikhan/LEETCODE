class Solution {
public:


    int minCost(vector<int>& start, vector<int>& home, vector<int>& rowC, vector<int>& colC) {

        int ans=0;
        int i=start[0];
        int j=start[1];
        if(i==home[0] && j==home[1]) return 0;
        while(i!=home[0] || j!=home[1]){
            if(i<home[0]){
                i++;
                ans+=rowC[i];
            }
            else if(i>home[0]){
                ans+=rowC[i-1];
                i--;
            }
            if(j<home[1]){
                j++;
                ans+=colC[j];
            }
            else if(j>home[1]){
                ans+=colC[j-1];
                j--;
            }
        }
        return ans;
        
    }
};