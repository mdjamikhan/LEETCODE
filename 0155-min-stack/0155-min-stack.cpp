class MinStack {
public:
vector<vector<int>>ans;
    MinStack() {
        
    }
    
    void push(int val) {
        int mini=getMin();
        if(ans.empty()||mini>val ){
        
            mini=val;
        }
        ans.push_back({val,mini});

        
        
    }
    
    void pop() {
        ans.pop_back();
        
    }
    
    int top() {

        if(!ans.empty()) return ans.back()[0];

        return -1;
        
    }
    
    int getMin() {

        return  (ans.empty())?-1:ans.back()[1];
        

           
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */