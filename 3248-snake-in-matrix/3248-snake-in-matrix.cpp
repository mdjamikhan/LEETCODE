class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) 
    {
        int m=c.size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            if(c[i]=="RIGHT"){
                ans+=1;
            }
            if(c[i]=="DOWN"){
                ans+=n;
            }
            if(c[i]=="LEFT"){
                ans-=1;
            }
            if(c[i]=="UP"){
                ans-=n;
            }

        }
        return ans;
        
    }
};