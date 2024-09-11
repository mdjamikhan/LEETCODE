class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        int index=-1;
        for(int i=0;i<goal.size();i++){
            if(s[0]==goal[i]){
                index=i;

            }

        }
        string a="";
        for(int i=index;i<goal.size();i++)
        {
            a+=goal[i];


        }
        for(int i=0;i<index;i++)
        {
            a+=goal[i];

        }
        cout<<a;
        return a==s;


        

        
    }
};