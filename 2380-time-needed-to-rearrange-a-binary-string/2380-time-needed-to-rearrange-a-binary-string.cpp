class Solution {
public:
    int secondsToRemoveOccurrences(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            bool flag=false;
            for(int j=1;j<n;j++)
            {
                if(s[j-1]=='0' && s[j]=='1'){
                    swap(s[j-1],s[j]);
                    j++;
                    flag=true;
                }
            }
            if(flag){
                count++;
            }
            else{
                break;
            }
        }
        return count;
        
    }
};