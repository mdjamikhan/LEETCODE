class Solution {
public:
    int findComplement(int num) {
    
        string a="";
        while(num>=1){
            int k=num%2;
            if(k==1){
                a="0"+a;
            }
            else{
                a="1"+a;
            }
            
          
            num/=2;
        }
        cout<<a;
        int result=0;
        for(char it:a){
            result=(result<<1)+(it-'0');
        }


      
        return result;
        
    }
};