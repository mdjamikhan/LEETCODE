class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        unordered_map<int, vector<int>> mp1;
        vector<int> maxRep(26, 0); // Maximum frequency requirements for each letter

        // Precompute letter frequencies for words2
        for (const string& word : words2) {
            vector<int> freq(26, 0);
            for (char ch : word) {
                freq[ch - 'a']++;
                maxRep[ch - 'a'] = max(maxRep[ch - 'a'], freq[ch - 'a']);
            }
        }

        // Precompute letter frequencies for words1
        for (int i = 0; i < words1.size(); i++) {
            mp1[i] = vector<int>(26, 0);
            for (char ch : words1[i]) {
                mp1[i][ch - 'a']++;
            }
        }

        // Check universality for each word in words1
        vector<string> ans;
        for (int i = 0; i < words1.size(); i++) {
            bool isUniversal = true;
            for (int k = 0; k < 26; k++) {
                if (mp1[i][k] < maxRep[k]) {
                    isUniversal = false;
                    break;
                }
            }
            if (isUniversal) {
                ans.push_back(words1[i]);
            }
        }

        return ans;
    }
};