class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        stack<int>stk;
        queue<int>q;
        for(int i=n-1;i>=0;i--){
            stk.push(sandwiches[i]);
        }
        for(int it: students ){
            q.push(it);
        }
        int count=0;


        while(!stk.empty() && count<q.size()){
            if(stk.top()==q.front()){
                stk.pop();
                q.pop();
                count=0;
            }
            else{
               q.push(q.front());
               q.pop();
               count++;   
            }

        }
        return q.size();
        


        
    }
};