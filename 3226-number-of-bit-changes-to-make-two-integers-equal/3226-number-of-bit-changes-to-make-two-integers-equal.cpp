class Solution {
public:
    int minChanges(int n, int k) {
        if(n==k) return 0;
        string a=bitset<32> (n).to_string();
        string b=bitset<32> (k).to_string();


        int size=a.size();
        int size2=b.size();
        int count=0;
        int i=0,j=0;
        while(i<size && j<size2){
            if(a[i]=='1' && b[j]=='0'){
                count++;
                b[j]='1';
            }
            j++;
            i++;

        }
        bitset<32> binary(a);
        bitset<32> binary2(b);
        int val1=binary.to_ulong();
        int val2=binary2.to_ulong();
        cout<<val1<<" "<<val2;
        if(val1==val2) return count;
        return -1;
    }
};