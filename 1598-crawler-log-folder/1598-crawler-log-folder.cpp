class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n=logs.size();
        int mini=INT_MAX;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(logs[i]=="../"){
              //  mini=min(mini,count);
                count--;
            }
            else if(logs[i]=="./"){
                count=count;
            }
            else{
                count++;
            }
        }
       if(count<0) return 0;
        return count;
        
    }
};