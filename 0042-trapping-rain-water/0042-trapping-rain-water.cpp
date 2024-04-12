class Solution {
public:

    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> front;
        vector<int>last;
        front.push_back(height[0]);
    
        for(int i=1;i<n;i++)
        {
            if(height[i]>front.back()){
                
                front.push_back(height[i]);
            }
            else{
                front.push_back(front.back());
            }
        }
        last.push_back(height[n-1]);
        
        for(int i=n-2;i>=0;i--)
        {
            if(height[i]>last.back()){
                last.push_back(height[i]);
            }
            else{
                last.push_back(last.back());
            }

        }
        reverse(last.begin(),last.end());
        vector<int>ans(n);
        int sum=0;
        for(int i=0;i<n;i++)
        {
            ans[i]=min(front[i],last[i])-height[i];
            sum+=ans[i];
        }
        return sum;
 
    }
};