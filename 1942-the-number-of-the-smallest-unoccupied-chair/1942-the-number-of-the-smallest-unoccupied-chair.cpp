class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;

        for(int i=0;i<times.size();i++){
            pq.push({times[i][0],{times[i][1],i}});

        }
        vector<int>ocu(times.size()+1,-1);
        while(!pq.empty()){
            auto it=pq.top();
            int arive=it.first;
            int dep=it.second.first;
            int ind=it.second.second;
            pq.pop();
            int ocupy_seat=-1;
            for(int i=0;i<ocu.size();i++)
            {
                if(ocu[i]==-1 || ocu[i]<arive){
                    ocu[i]=dep;
                    ocupy_seat=i;
                    break;

                }
            }
            if(ind==targetFriend) return ocupy_seat;
            
        }
        return -1;
       

       


        
    }
};