class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
        int count=0;
        unordered_map<string,int>mp;
        for(int it:arr1){
            string p=to_string(it);
            string pp="";
            for(char c:p){
                pp+=c;

                mp[pp]++;
            }
        }

        for(int i=0;i<m;i++)
        {
            string k=to_string(arr2[i]);
            string add="";
            for(char it:k){
                add+=it;
                if(mp.find(add)!=mp.end()){
                    count=max(count,static_cast<int>(add.size()));
                }

            }
            
        }
        return count;
    }
};