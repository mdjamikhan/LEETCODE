class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(apple.begin(),apple.end());
        sort(capacity.begin(),capacity.end());
        int sum = accumulate(apple.begin(), apple.end(), 0);
        int n=capacity.size();
        int count=0;
        for(int i=n-1;i>=0;i--)
        {
            sum-=capacity[i];
            count++;
            if(sum<=0){
                break;
            }

        }
        return count;
        
    }
};