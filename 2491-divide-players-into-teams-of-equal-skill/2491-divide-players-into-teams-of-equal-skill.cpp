class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int i=0;
        int j=skill.size()-1;
        // vector<pair<int,int>>mp;
        long long last=skill[i]+skill[j];
        long long pro=skill[i]*skill[j];
        j--;
        i++;
        if(skill.size()==2){
            return skill[0]*skill[1];
        }
        while(i<j){
            int sum1=skill[i]+skill[j];
            if(sum1==last){
                pro+=(skill[i]*skill[j]);
                j--;
                i++;

            }
            else{
                return -1;
            }
        }
        return pro;
        
    }
};