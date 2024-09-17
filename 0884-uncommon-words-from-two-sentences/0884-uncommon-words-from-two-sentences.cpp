class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
    unordered_map<string,int>mp;
    stringstream ss1(s1);
    string word;
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==' '){
            mp[word]++;
            word="";
        }
        else{
            word+=s1[i];
        }
    }
    if(!word.empty()){
        mp[word]++;
    }
    word="";
     for(int i=0;i<s2.size();i++)
    {
        if(s2[i]==' '){
            mp[word]++;
            word="";
        }
        else{
            word+=s2[i];
        }
        

    }
    if(!word.empty()){
        mp[word]++;
    }
       
    // while(ss1>>word){
    //     //if(word!=' '){
    //         mp[word]++;
    //     //}

    // }
    // stringstream ss2(s2);
    // while(ss2>>word){
    //     //if(word!=' '){
    //         mp[word]++;
    //     //}

    // }
    vector<string>ans;

    for(auto it:mp){
        if(it.second==1){
            ans.push_back(it.first);


        }
    }
    return ans;

        
    }
};