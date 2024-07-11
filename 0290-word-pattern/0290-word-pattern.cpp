class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,int> mp;
        unordered_map<string,int>mp1;
        vector<string>store;
        istringstream stream(s);
        string word;
       
        for(char a:pattern){
            mp[a]++;
        }
        while(stream>>word)
        {
            store.push_back(word);
            mp1[word]++;
        }

        for(int i=0;i<store.size();i++)
        {
            char tt=pattern[i];
            string ss=store[i];

            int count1=mp[tt];
            int count2=mp1[ss];
            if(count1!=count2) return false;
        }
        return true;

       
    }
};