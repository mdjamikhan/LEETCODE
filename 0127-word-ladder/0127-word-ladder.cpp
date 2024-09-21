class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& word) {
        queue<pair<string,int>>q;
        unordered_set<string>st(word.begin(),word.end());
        q.push({begin,1});
        st.erase(begin);
        while(!q.empty()){
            string a=q.front().first;
            int dis=q.front().second;
            q.pop();
            if(a==end) return dis;

            for(int i=0;i<a.size();i++){
                char oldchar=a[i];
                for(char it='a';it<='z';it++){
                    a[i]=it;
                    if(st.find(a)!=st.end()){
                        q.push({a,dis+1});
                        st.erase(a);
                    }
                }
                a[i]=oldchar;
            }
        }
        return 0;
        
    }
};