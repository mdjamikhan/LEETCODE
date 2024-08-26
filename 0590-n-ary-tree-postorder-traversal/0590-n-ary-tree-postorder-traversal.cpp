/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
void dis(vector<int> &ans,Node *root)
{
    if(root==NULL)
    {
        return;
    }
   
    for( auto p:root->children)
    {
        dis(ans,p);
    }
    ans.push_back(root->val);
}

    vector<int> postorder(Node* root) {
        vector<int>ans;
        // dis(ans,root);
        // return ans;
        if(root==NULL) return ans;
        stack<Node *>st;
        stack<Node *>st1;
        st.push(root);
        while(!st.empty()){

            
            Node* p=st.top();
            st.pop();
            st1.push(p);
            for( auto it:p->children)
            {
                
                if(it){
                    st.push(it);
                }

            }
        }
        while(!st1.empty()){
            ans.push_back(st1.top()->val);
            st1.pop();

        }
        return ans;
    }
};