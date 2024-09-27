class MyCalendarTwo {
public:
// vector<int>ans;
vector<vector<int>>first;
vector<vector<int>>second;
int take=0;
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for( auto it:second){
            if(max(start,it[0])<min(end,it[1])){
                return false;
            }
        }
        for(auto it:first){
            if(max(start,it[0])<min(end,it[1])){
                second.push_back({max(start,it[0]),min(end,it[1])});
            }
        }
        first.push_back({start,end});
        return true;

        


        
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */