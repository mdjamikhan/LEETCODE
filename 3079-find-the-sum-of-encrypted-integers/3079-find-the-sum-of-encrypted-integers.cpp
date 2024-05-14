class Solution {
public:
int solve(int n){
    int maxi=INT_MIN;
    while(n>0){
        int r=n%10;
        n/=10;
        maxi=max(maxi,r);

    }
    return maxi;
}
int digit1(int n){
    int count=0;
    while(n>0){
        int r=n%10;
        n/=10;
        count++;
    }
    return count;
}
int sum1(int k,int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum*10+k;

    }
    return sum;
    
}
    int sumOfEncryptedInt(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int k=solve(nums[i]);
            int digit=digit1(nums[i]);
            sum+=sum1(k,digit);
        }
        return sum;
        
    }
};