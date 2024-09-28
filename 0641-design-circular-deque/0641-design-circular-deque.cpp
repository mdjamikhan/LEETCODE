class MyCircularDeque {
public:
int size=0;
   deque<int>dq;
   
    MyCircularDeque(int k) {
        //dq(k);
        this->size=k;
        //dq.resize(k);

        
        
    }
    
    bool insertFront(int value) {
        if(dq.size()<size){
            dq.push_front(value);
            return true;
        }
        return false;
        
        
    }
    
    bool insertLast(int value) {
        if(dq.size()<size){
            dq.push_back(value);
            return true;
        }
        return false;
        
    }
    
    bool deleteFront() {
        if(dq.size()>0){
            dq.pop_front();
            return true;
        }
        return false;
        
    }
    
    bool deleteLast() {
        if(dq.size()>0) {
            dq.pop_back();
            return true;
        }
        return false;
        
    }
    
    int getFront() {
        int t=dq.front();
        return t;
        
    }
    
    int getRear() {
        int t=dq.back();
        return t;
        
    }
    
    bool isEmpty() {
        
        if(dq.empty()) return true;
        return false;
        
    }
    
    bool isFull() {
        if(dq.size()==size) return true;
        return false;
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */