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
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<Node*>q;
        q.push(root);

        while(!q.empty()){
            int size=q.size();

                vector<int>store;
             for(int i=0;i<size;i++)
             {
                Node *p=q.front();
                q.pop();
                store.push_back(p->val);

                for(auto it:p->children)
                {
                    if(it){
                        q.push(it);
                        
                    }
                }
             }
                ans.push_back(store);
        }
        return ans;
        
    }
};