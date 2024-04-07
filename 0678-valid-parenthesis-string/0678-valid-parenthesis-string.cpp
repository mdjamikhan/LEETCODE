class Solution {
public:
    bool checkValidString(string s) {
        int n=s.size();
        int count=0;
        int count1=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='('){
                count++;
                count1++;
            }
            else if(s[i]==')'){
                count--;
                count1--;
            }
            else{
                count--;
                count1++;
            }
        }
       

       
        return count==0;


        
    }
};