class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int countb=0;
        int countw=0;
        int maxi=0;
        for(int i=0;i<k;i++){
            if(blocks[i]=='B')countb++;
        }
        maxi=max(maxi,countb);
   
        for(int i=k;i<n;i++)
        {
            if(blocks[i]=='B' && blocks[i-k]=='W') countb++;
            if(blocks[i]=='W' && blocks[i-k]=='B') countb--;
            maxi=max(maxi,countb);
            
        }
        return k-maxi;
   
   
       
    }
};