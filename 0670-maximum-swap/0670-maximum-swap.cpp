class Solution {
public:
    int maximumSwap(int num) {
        string a=to_string(num);
        int value[10]={-1};

        for(int i=0;i<a.size();i++)
        {
            value[a[i]-'0']=i;

        }
        for(int i=0;i<a.size();i++)
        {
            for(int j=9;j>a[i]-'0';j--){

                if(value[j]>i){
                    swap(a[i],a[value[j]]);
                    return stoi(a);
                }

            }
        }
        return num;
    }
};