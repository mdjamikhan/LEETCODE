class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       // for(int i=)
        int m=s1.size();
        int n=s2.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s2[i]]=i;
        }
        int index=mp[s1[0]];
        int diff=0;
        
        for(int j=1;j<n;j++)
        {
            if(mp.find(s1[j])!=mp.end()){
                int one =mp[s1[j]];
                 if(abs(index-one)>1) return false;
                 else{
                    index=one;
                 }
            }
        }
        return true;
        // for(int i=0;i<m;i++)
        // {
        //     if(mp.find(s1)==mp.end()) return false;
        //     for(int j=0;j<n;j++ )
        //     {

        //     }
        // }


        
    }
};