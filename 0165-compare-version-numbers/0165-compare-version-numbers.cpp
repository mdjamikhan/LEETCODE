class Solution {
public:
    int compareVersion(string v1, string v2) {
       const  int n=v1.size();
        const int m=v2.size();
        int sum1=0;
        int sum2=0;

        // if(v1[0]<v2[0]) return -1;
        // if(v1[0]>v2[0]) return 1;
        for(int i=0,j=0;i<n||j<m;i++,j++){

            while(i<n && v1[i]!='.'){
                sum1=10*sum1+(v1[i]-'0');
                i++;

            }
            while(j<m && v2[j]!='.'){
                 sum2=10*sum2+(v2[j]-'0');
                 j++;

            }
            if(sum1>sum2) return 1;
            else if(sum2>sum1) return -1;
            sum1=0;
            sum2=0;
        }
        return 0;





        return 0;
    

        
    }
};