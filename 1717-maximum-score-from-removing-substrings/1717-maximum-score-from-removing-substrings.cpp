class Solution {
public:
int solve(string &s,string sub,int point1,string sub2,int point2){
    stack<char>st1;
    stack<char>st2;
    int sum=0;
    for(int i=0;i<s.size();i++)
    {
        if(!st1.empty() && st1.top()==sub[0]  && s[i]==sub[1]){
            sum+=point1;  
            st1.pop() ;
        }
        else{
            st1.push(s[i]);
        }

    }
    string reman;
    while(!st1.empty()){
        reman+=st1.top();
        st1.pop();
    }
    reverse(begin(reman),end(reman));
    int sum2=0;
    for(int i=0;i<reman.size();i++)
    {
        if(!st2.empty() && st2.top()==sub2[0] && reman[i]==sub2[1]){
            sum2+=point2;
            st2.pop();
        }
        else{
            st2.push(reman[i]);
        }
    }
    return sum+sum2;
}
    int maximumGain(string s, int x, int y) {


        return x>y?solve(s,"ab",x,"ba",y):solve(s,"ba",y,"ab",x);
        
    }
};