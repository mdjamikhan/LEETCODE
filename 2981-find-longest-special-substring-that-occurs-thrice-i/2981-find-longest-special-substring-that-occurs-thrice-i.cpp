class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string, int> mp;
        int count=-1;
        for(int i=0;i<s.size();i++){
            string st="";
            for(int j=i;j<s.size();j++){
                st+=s[j];
                mp[st]++;

                if(mp[st]==3){
                    count = max(count, (int)st.size());
                }


            }
        }
        if(count==0)return -1;
        return count;
        
        
    }
};
