class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        vector<int> freq(26, 0);
        for (char it : s) {
            freq[it - 'a']++;
        }
        string ans = "";
        int i = 25;

        while (i >= 0) {

            if (freq[i] == 0) {
                i--;

                continue;
            }

            int charwant = min(freq[i], repeatLimit);

            char store = i + 'a';
            ans.append(charwant, store);
            freq[i] -= charwant;

            if (freq[i] > 0) {
                int j = i - 1;
                while (j > 0 && freq[j] == 0) {
                    j--;
                }
                if (j < 0) {
                    break;
                }
                // int cha = min(freq[j], repeatLimit);
                int newch = j + 'a';
                ans.push_back(newch);
                freq[j] -= 1;
            }
        }
        return ans;
    }
};