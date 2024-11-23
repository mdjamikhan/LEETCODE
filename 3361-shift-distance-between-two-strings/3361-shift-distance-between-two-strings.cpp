class Solution {
public:
    long long shiftDistance(string s, string t, vector<int>& nextCost, vector<int>& previousCost) {
        long long sum=0;
        int n=s.size();

        for(int i=0;i<n;i++){
            int st=s[i]-'a';
            int e=t[i]-'a';
           // int len=abs(st-e);
            int len = (e - st + 26) % 26;
            long long count=0;
            for(int j=0;j<len;j++){

                count+=nextCost[(st+j)%26];
                

            }
            long long  count2=0;
            for(int k=0;k<(26-len);k++){
                count2+=previousCost[(st-k+26)%26];

            }
            sum+= min(count,count2);
        }

        return sum;


        
    }
};