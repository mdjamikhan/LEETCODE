class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {

        int i=0;
        int j=0;
        int n=str1.size();
        int m=str2.size();

        while(i<n && j<m){
            if(str1[i]==str2[j]){
                j++;
                
            }
            else {
            
                if((str1[i]-'a'+1)%26==0){
                    str1[i]='a';
                }
                else{
                    str1[i]+=1;
                }
                if(str1[i]==str2[j]){
                    j++;
                }
            }
             i++;
            

        }

        return j==m;  
    }
};