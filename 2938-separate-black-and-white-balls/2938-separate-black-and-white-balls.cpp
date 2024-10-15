class Solution {
public:
    long long minimumSteps(string s) {
        long long count=0;
        long long zero=0;
        int i=0;
        int j=s.size()-1;
        while(i<=j){
            if(s[j]=='1') count+=zero;
            if(s[j]=='0') zero++;
            j--;
        }
        return count;
        
    }
};