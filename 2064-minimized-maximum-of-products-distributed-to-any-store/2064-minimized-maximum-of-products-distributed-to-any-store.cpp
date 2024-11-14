class Solution {
public:
    int minimizedMaximum(int n, vector<int>& quan) {
        int acc=accumulate(quan.begin(),quan.end(),0);
        if (n <= 2) {
            int maxi = *max_element(quan.begin(), quan.end());
            return maxi;
        }
        int maxi=0;
        while(n!=0){
            int div=acc/n;
            acc-=div;
            maxi=max(maxi,div);
            n--;
        }
        return maxi;


       
        
    }
};