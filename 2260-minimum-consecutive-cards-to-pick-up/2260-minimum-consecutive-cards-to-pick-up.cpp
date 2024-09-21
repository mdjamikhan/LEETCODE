class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        unordered_map<int,int>mp;
        int size=-1;
        int fast=-1;
        int last=-1;
        int mini=INT_MAX;

        for(int i=0;i<n;i++)
        {
            if(mp.find(cards[i])!=mp.end()){
                fast=mp[cards[i]];
                last=i;
                size=last-fast;
                mini=min(mini,size);
            } 
            mp[cards[i]]=i;
        }
        // int mini=INT_MAX;
        // mini=min(mini,size);
        // fast=-1;
        // last=-1;
        // //size=-1;
        // for(int i=size;i<n;i++)
        // {
        //     if(mp.find(cards[i])!=mp.end()){
        //         fast=mp[cards[i]];
        //         last=i;
        //         mini=min(size,last-fast);

        //     }
        //     mp[cards[i]]=i;
        // }
        if(mini==INT_MAX) return -1;
        return mini+1;
        
    }
};