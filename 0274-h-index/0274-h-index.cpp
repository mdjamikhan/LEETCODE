class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int h=0;
        int size=c.size();
        for(int i=0;i<c.size();i++)
        {

                if(size-i<=c[i]){
                     h=size-i;
                     break;
                }
        }
        return h;


        
    }
};