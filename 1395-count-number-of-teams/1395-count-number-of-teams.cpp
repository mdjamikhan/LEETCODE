class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int total=0;

        for(int i=0;i<n;i++)
        {
        int leftsmall=0;
        int rightsmall=0;
        int leftlarge=0;
        int rightlarge=0;
            for(int j=i-1;j>=0;j--)
            {
                if(rating[i]>rating[j]) leftsmall++;
                if(rating[i]<rating[j]) leftlarge++;

            }
            for(int k=i+1;k<n;k++)
            {
                if(rating[i]>rating[k]) rightsmall++;
                if(rating[i]<rating[k]) rightlarge++;

            }
            total+=leftsmall*rightlarge+rightsmall*leftlarge;
        }
        return  total;
        
    }
};