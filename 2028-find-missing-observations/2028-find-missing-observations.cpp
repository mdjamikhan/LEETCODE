class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
     
        vector<int>ans1;
        vector<int>store{1,2,3,4,5,6};
        int m=rolls.size();
        int size=n+m;
        int sum=accumulate(rolls.begin(),rolls.end(),0);
        int x=(mean*size)-sum;

        if(x<n || x>n*6) return {};

        int wantval=x/n;
        int extra=x%n;
        for(int i=0;i<n;i++)
        {
            if(i<extra){
                ans1.push_back(wantval+1);
            }
            else{
                ans1.push_back(wantval);
            }
        }
        return ans1;

        
    }
};