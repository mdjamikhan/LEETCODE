class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {

        int n=skills.size();
        int count=0;
        int index=0;
        int mini=skills[0];//
        if(k>=n){
            for(int i=0;i<n;i++)
            {
                if(skills[index]<skills[i]){
                    index=i;
                }
            }
            return index;
        }
        
        for(int i=1;i<n;i++)
        {
            if(skills[index]>skills[i]){
                ++count;   
            }
            else{
                index=i;
                count=1;
            }

            if(count==k) break;


        }
        return index;

        
    }
};