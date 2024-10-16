class Solution {
public:
    string reorganizeString(string s) {

        unordered_map<char,int>mp;
        for(char it:s){
            mp[it]++;

        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mp){
            pq.push({it.second,it.first});
        }
        string ans;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            if(ans.size()>0 && ans[ans.size()-1]==it.second){
                if(pq.empty()) return "";

                auto two=pq.top();
                pq.pop();
                ans+=two.second;
                two.first--;
                if(two.first>0) pq.push({two.first,two.second});

                pq.push({it.first,it.second});

            }
            else{
                ans+=it.second;
                it.first--;
                if(it.first>0) pq.push({it.first,it.second});
            }
        }

        for(int i=1;i<ans.size()-1;i++){
            if(ans[i-1]==ans[i]) return "";

        }
        return ans;
    
    }
};