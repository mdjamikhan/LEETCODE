class Solution {
public:
    int countOfSubstrings(string word, int k) {
       int total=0;


        for(int i=0;i<word.size();i++)
        {
            int counta=0, counte=0,counti=0, counto=0 ,countu=0, conso=0;
            for(int j=i;j<word.size();j++)
            {
                if(word[j]=='a') counta++;
                else if(word[j]=='e') counte++;
                else if(word[j]=='i') counti++;
                else if(word[j]=='o') counto++;
                else if(word[j]=='u') countu++;
                else{
                    conso++;

                }
                if(counta && counte && counti && counto && countu && (conso==k)) total++;
            }
        }
        return total;

        
    }
};