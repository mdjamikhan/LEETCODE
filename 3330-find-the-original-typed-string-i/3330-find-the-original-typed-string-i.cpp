class Solution {
public:
    int possibleStringCount(string word) {
        unordered_map<char,int>mp;
        int count=1;
        for(int i=0;i<word.size()-1;i++){
            if(word[i]==word[i+1]){
                count++;
            }

        }
        return count;
        
    }
};