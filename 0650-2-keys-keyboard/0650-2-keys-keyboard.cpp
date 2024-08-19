class Solution {
public:
    int minSteps(int n) {
        int sum=0;
        vector<int>ans;

        while(n%2==0){
            ans.push_back(2);
            sum+=2;
            n/=2;
        }
         for (int i = 3; i <=sqrt(n); i += 2) {
                while (n % i == 0) {
                    sum+=i;
                
                    n /= i;
                    //ans.push_back(i);
                }
        }
        if (n > 2) {
            sum += n;
        }
            
        // int sum=0;
        // for(int i=0;i<ans.size();i++)
        // {
        //     sum+=ans[i];
        // }
        return sum;
        
    }
};