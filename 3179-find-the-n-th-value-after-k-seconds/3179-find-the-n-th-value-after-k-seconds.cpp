class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        
        int arr[n];
        // int arr1[]={};
        int val=1;
        for(int i=0;i<n;i++){
            arr[i]=val;
        }
        
        int last;
        for(int i=1;i<=k;i++){
            for(int j=1;j<n;j++){
                arr[j]=(arr[j]+arr[j-1])%1000000007;
            }
        }
        // last=arr[n-1];
        return arr[n-1];
    }
};