class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        int i=0;
        string ans="";
        

        while(i<n){
            int count=0;
            char val=word[i];
            while(i<n && word[i]==val && count<9){
                ++i;
                count++;
            }
            ans+=to_string(count)+val;
        }
        return ans;
      


        
    }
};