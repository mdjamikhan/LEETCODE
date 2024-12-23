class Solution {
public:
int merge(vector<vector<int>>&arr){
    sort(arr.begin(),arr.end());
    vector<vector<int>>check;
    check.push_back(arr[0]);
    int count=0;
    
    for(int i=1;i<arr.size();i++){

        if(arr[i][0]>=check.back()[1]){
            check.push_back(arr[i]);
            count++;
            
        }
        else{
        
        check.back()[1]=max(arr[i][1],check.back()[1]);
        }
        
    }
    
    return count;
    


}
    bool checkValidCuts(int n, vector<vector<int>>& rec) {
      
        vector<vector<int>>x;
        vector<vector<int>>y;
        for(int i=0;i<rec.size();i++){
            x.push_back({rec[i][0], rec[i][2]});
            y.push_back({rec[i][1], rec[i][3]});
            
        }
        int a=merge(x);
        int b=merge(y);

     
        
        return (a>=2|| b>=2); 
        
        
    }
};