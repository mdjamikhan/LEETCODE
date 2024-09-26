class MyCalendar {
public:
vector<vector<int>>ans;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {

        if(ans.size()==0){

            ans.push_back({start,end});
            return true;
        }
        for(int i=0;i<ans.size();i++)
        {
            if(start<ans[i][1] && end>ans.back()[i] )return false;

            else{
                ans[i][1]=max(end,ans[i][1]);
            }

        }
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */