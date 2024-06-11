class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();

        vector<int>scount(26,0);
        vector<int>pcount(26,0);
        vector<int>ans;
        for(char it:s){
            scount[it-'a'];
        }
        for(int i=0;i<m;i++)
        {
            pcount[p[i]-'a'];
        }
        if(pcount==scount) ans.push_back(0);

        for(int i=m;i<n;i++)
        {
            scount[s[i]-'a']++;
            scount[s[i-m]-'a']--;

            if(scount==pcount) ans.push_back(i-m+1);
        }

        return ans;
        
    }
};