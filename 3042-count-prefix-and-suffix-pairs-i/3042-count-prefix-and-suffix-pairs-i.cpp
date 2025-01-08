class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int n=words.size();
        int count=0;
        for(int i=0;i<n-1;i++){

            string p=words[i];
            for(int j=i+1;j<n;j++){
                string l=words[j];
                if(l.size()>=p.size()){
                    int k=p.size();
                    string c=l.substr(0,k);
                    string n=l.substr(l.size()-k,l.size());
                    if(c==p && n==p) count++;
                }
                else{
                    continue;
                }

            }
        }
        return count;
        
    }
};