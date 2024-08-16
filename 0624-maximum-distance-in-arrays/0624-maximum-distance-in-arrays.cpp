class Solution {
public:
// int solve(vector<int>a,vector<int>b){
//     int n=a.size();
//     int m=b.size();
//     int one= abs(a[0]-b[m-1]);
//     int two=abs(b[0]-a[n-1]);
//     if(one>two) return one;
//     return two;
// }
    int maxDistance(vector<vector<int>>& arrays) {
        int n=arrays.size();
        int diff=0;
        int maxi=arrays[0].back();
        int mini=arrays[0].front();
        for(int i=1;i<=n-1;i++){
            int currmaxi=arrays[i].back();
            int currmini=arrays[i].front();


            diff=max(diff,abs(currmaxi-mini));
            diff=max(diff,abs(maxi-currmini));


            maxi=max(maxi,currmaxi);
            mini=min(mini,currmini);

            
        }
        return diff;
        
    }
};