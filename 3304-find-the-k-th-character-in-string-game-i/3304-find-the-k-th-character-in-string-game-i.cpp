class Solution {
public:
    char kthCharacter(int k) {
        string ans="a";
        int next=0;
        int n=ans.size();
        while(ans.size()<k)
        {
            string temp="";
            
            for(char it:ans)
            {
                if(it=='z')  temp+='a';

                else{
                    temp+=char(++it);
                }
            }
            ans+=temp;
        }
        return ans[k-1];

    }
};