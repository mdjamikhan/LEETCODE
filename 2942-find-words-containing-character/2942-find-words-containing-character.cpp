class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {

        int i=-1;
        vector<int>ans;
        

        for(string word:words){
            i++;


            for(char c:word){
                if(c==x){
                    ans.push_back(i);
                    break;

                }
            }
        }
        if(ans.empty()) return {};
        return ans;
    }
};