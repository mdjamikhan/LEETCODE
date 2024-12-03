class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        sort(spaces.begin(),spaces.end());

        int j=0;
        string ans="";

        for(int i=0;i<spaces.size();i++){
            int k=spaces[i];
            string p="";
            p=s.substr(j,k-j);
            j=k;
            ans=ans+p;
           
            ans+=" ";
            
        }
        ans+=s.substr(j);
        return ans;



        
    }
};