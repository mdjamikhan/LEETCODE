class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.rbegin(),maximumHeight.rend());
        unordered_map<int,int>mp;
        long long maxi=0;
        long long Large=1e9+1;
       
        mp[maximumHeight[0]]++;
        for(int i=0;i<maximumHeight.size();i++)
        {
            if(Large>maximumHeight[i]){
                Large=maximumHeight[i];
                maxi+=Large;
               
                


            }
            else{
                if(Large-1==0) return -1;
                maxi+=Large-1;
                Large=Large-1;
            } 
        }
        return maxi;  
    }
};