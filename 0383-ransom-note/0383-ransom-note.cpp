class Solution {
public:
    bool canConstruct(string ran, string mag) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;
        int n=ran.size();
        int count=0;
        sort(ran.begin(),ran.end());
        sort(mag.begin(),mag.end());
        for(int i=0;i<n;i++)
        {
            if(ran[i]==mag[i]){
                count++;
            }

        }
        return count==n;
        // if(mag.size<ran.size()) return false;
        // for(char it:ran){
        //     mp1[it]++;
        // }
        // for(char it:mag){
        //     mp2[it]++;
        // }
        // f

        
    }
};