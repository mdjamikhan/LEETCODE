class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        string add="0000";
        string a=to_string(num1);
        string b= to_string(num2);
        string c=to_string(num3);
        a=add.substr(0,add.size()-a.size())+a;
        b=add.substr(0,add.size()-b.size())+b;
        c=add.substr(0,add.size()-c.size())+c;
        string store="";


        for(int i=0;i<a.size();i++)
        {
            store+=to_string(min({a[i]-'0',b[i]-'0',c[i]-'0'}));

        }
        int k=stoi(store);
        return k;
    
        


    


        
    }
};