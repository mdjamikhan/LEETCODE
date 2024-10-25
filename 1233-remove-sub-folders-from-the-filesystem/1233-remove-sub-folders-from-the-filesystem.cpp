class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        unordered_map<string,int>mp;
        sort(folder.begin(),folder.end());
        vector<string>ans;
        ans.push_back(folder[0]);
        string a="";
        for(int i=1;i<folder.size();i++)
        {
            string help=ans.back();
            help.push_back('/');

            if(folder[i].compare(0,help.size(),help)!=0){
                ans.push_back(folder[i]);
            }


        }
        return ans;

        
    }
};