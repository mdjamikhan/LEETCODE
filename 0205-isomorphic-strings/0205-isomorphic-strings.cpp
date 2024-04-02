class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mapping;
        unordered_set<char> mapped;

        if (s.size() != t.size()) 
            return false;

        for (int i = 0; i < s.size(); ++i) {
            char a = s[i];
            char b = t[i];

            if (mapping.find(a) != mapping.end()) {
                if (mapping[a] != b)
                    return false;
            } else {
                if (mapped.find(b) != mapped.end())
                    return false;
                mapping[a] = b;
                mapped.insert(b);
            }
        }

        return true;
    }
};
