class Solution {
public:
    int isPrefixOfWord(string sentence, string search) {
        int n = search.size();
        istringstream stream(sentence);
        string word;
        vector<string> ans;
        while (stream >> word) {
            ans.push_back(word);
        }
        int count = 0;
        for (int i = 0; i < ans.size(); i++) {
            string p = ans[i];
            if (p.size() >= search.size()) {
                if (p[0] == search[0]) {
                    bool flag = true;
                    for (int i = 0; i < n; i++) {
                        if (p[i] != search[i]) {
                            flag = false;
                        }
                    }

                    if(flag==true) return i+1;
                }
            }
        }
        return -1;
    }
};