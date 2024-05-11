class Solution {
public:
    bool isValid(string word) {
        int n=word.size();
        int countsmall=0;
        int countbig=0;
        int conso=0;
        int digit=0;
        int vowel=0;
        if(word.size()<3) return false;
        for(int i=0;i<n;i++)
        {
            if(word[i]=='$'|| word[i]=='@'|| word[i]=='#'){
                return false;
            }
            else{
                if(word[i]=='a' || word[i]=='e' || word[i]=='i'|| word[i]=='o'|| word[i]=='u') {
                    vowel++;
                    countsmall++;
                }
                else if( word[i]=='A'|| word[i]=='E'|| word[i]=='I'||word[i]=='O'|| word[i]=='U' )
                { 
                    countbig++;
                    vowel++;
                }
                else if(!(word[i]=='a' || word[i]=='e' || word[i]=='i'|| word[i]=='o'|| word[i]=='u') && !(word[i]>='0' && word[i]<='9')) {
                    conso++;
                }
                else if(!( word[i]=='A'|| word[i]=='E'|| word[i]=='I'||word[i]=='O'|| word[i]=='U')&& !(word[i]>='0' && word[i]<='9'))
                { 
                    conso++;
                }
                else if((word[i]>='a' && word[i]<='z')){
                        countsmall++;      
                }
                else if(word[i]>='A' && word[i]<='Z') countbig++;

                else if(word[i]>='0' && word[i]<='9'){
                    digit++;
                }
            }
           

        }
            cout<<countsmall<<endl;
            cout<<countbig<<endl;
            cout<<digit<<endl;
            cout<<vowel<<endl;
            
        if((countsmall|| countbig|| digit) && vowel && conso){
            return true;
        }
        return false;

        
    }
};