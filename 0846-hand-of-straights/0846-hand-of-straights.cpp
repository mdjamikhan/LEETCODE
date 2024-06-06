class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int gro) {
        sort(hand.begin(),hand.end());
        int n=hand.size();
        if(n!=gro*gro)return false;
        int k=0;
        // unordered_map<int,int>mp;
        // for(int i=0;i<hand.size();i++){
        //     mp[hand[i]]++;
        // }
        for(int i=0;i<n;i+=gro)
        {
            vector<int>ans;
            
            for(int j=i;j<n;j++)
            {
                ans.push_back(hand[j]);
                k++;
                if(k==gro){
                    k=0;
                    break;
                }
            }
                if(ans.size()!=gro) return false;
                k=0;
        }
        return true;
        
    }
};