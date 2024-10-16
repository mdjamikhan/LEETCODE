class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string ans="";
        priority_queue<pair<int,char>>pq;
         if(a>0)pq.push({a,'a'});
         if(b>0)pq.push({b,'b'});
         if(c>0)pq.push({c,'c'});

        while(!pq.empty()){
            auto one=pq.top();
            pq.pop();
            if(ans.size()>=2 && one.second==ans[ans.size()-1] && one.second==ans[ans.size()-2]){
                if(pq.empty()) break;

                auto two=pq.top();
                pq.pop();
                ans+=two.second;
                two.first--;
                if(two.first>0) pq.push({two.first,two.second});

                pq.push({one.first,one.second});
                

            }
            else{
            
                ans+=one.second;
                one.first--;
                if(one.first>0) pq.push({one.first,one.second});
            }

        }
        return ans;




    }
};