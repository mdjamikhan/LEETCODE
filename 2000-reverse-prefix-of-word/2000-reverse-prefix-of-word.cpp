class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n=word.size();
        int count=-1;
        for(int i=0;i<n;i++)
        {
            if(word[i]==ch){
                count=i;
                break;
            }
        }
        int i=0;
        while(i<count)
        {
            swap(word[i],word[count]);
            count--;
            i++;
        }
       cout<<count;
        return word;
        
    }
};