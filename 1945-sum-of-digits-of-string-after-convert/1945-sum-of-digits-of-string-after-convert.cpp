class Solution {
public:
    int getLucky(string s, int k) {
     
        int n=s.size();
        string a="";
        for(int i=0;i<n;i++)
        {
            a+=to_string((s[i]-'a')+1);
        }
        long long data=stol(a);
        int sum=0;
       

        while(k--)
        {
            sum=0;
            while(data!=0){
                int rem=data%10;
                data/=10;
                sum+=rem;

            }
            cout<<sum<<" ";
            data=sum;
        }
       

        return sum;
        
        
    }
};