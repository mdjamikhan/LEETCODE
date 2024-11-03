class Solution {
public:
    bool isBalanced(string num) {
        long long even=0;
        long long odd=0;
        for(int i=0;i<num.size();i++)
        {
            if(i%2==0) even+=(num[i]-'0');
            else odd+=(num[i]-'0');
        }

        return even==odd;
        
    }
};