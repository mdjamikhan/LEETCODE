class Solution {
public:
    int minimumChairs(string s) {
        int maxi=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='E'){
                count++;
            }
            else if(s[i]=='L'){
                count--;
            }
            maxi=max(maxi,count);

        }
        return maxi;

        
    }
};