class Solution {
public:
bool timetaken(int target,vector<int>&piles,int hour){
    for(auto it:piles){
        hour-=(it+ target-1)/target;

        if(hour<0) return false;
    }
    return true;
}
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(timetaken(mid,piles,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
        
    }
};