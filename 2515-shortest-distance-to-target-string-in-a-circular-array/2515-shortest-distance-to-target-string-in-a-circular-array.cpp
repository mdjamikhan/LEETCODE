class Solution {
public:
    int closetTarget(vector<string>& words, string target, int start) {
        int n=words.size();
        int right=1;
        bool flag=false;
        bool flag1=false;

        for(int i=start;i<n;i++){
            if(words[i]==target){
                flag=true;
                break;

            }
            else{
                right++;
            }
            
        }
        int count=1;
        for(int i=start;i<=-n;i++){
            if(words[(i-1+n)%n]==target){
                flag1=true;
                break;

            }
            else{
                count++;
            }
        }
        if(!flag && !flag1) return -1;
        return min(right,count);

        
    }
};