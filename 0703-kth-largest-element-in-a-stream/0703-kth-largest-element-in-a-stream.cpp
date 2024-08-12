class KthLargest {
public:
priority_queue<int,vector<int>,greater<int>>ans;
int k;


    KthLargest(int k, vector<int>& nums) {
       this->k=k;
       for(int num:nums){
            ans.push(num);
            if(ans.size()>k){
                ans.pop();
            }
       }
        
    }
    
    int add(int val) {
        ans.push(val);

       // while(!ans.empty()){
        if(ans.size()>k)  ans.pop();
        return ans.top();


       
      //  return l;
        

        
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */