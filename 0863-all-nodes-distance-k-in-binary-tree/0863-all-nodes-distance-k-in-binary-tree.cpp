/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:

void solve(TreeNode *root, unordered_map<TreeNode*, TreeNode*>& parent) {
    // Function implementation

   // if(root==NULL) return;

 
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode *curr=q.front();
        q.pop();
        if(curr->left){
            parent[curr->left] = curr;
            q.push(curr->left);
        }
        if(curr->right){
            parent[curr->right] = curr;
            q.push(curr->right);
        }
    }


}
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode*>parent;
        solve(root,parent);
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode *>q;
        q.push(target);
        visited[target]=true;
        int pos=0;
        while(!q.empty()){
            int size=q.size();
           
            if(pos++==k) break;
                        
            for(int i=0;i<size;i++)
            {
                TreeNode*check=q.front();
                
                q.pop();
                if(check->left && !visited[check->left]){
                    q.push(check->left);
                    visited[check->left]=true;
                }
                if(check->right && !visited[check->right]){
                    q.push(check->right);
                    visited[check->right]=true;
                }
                if(parent[check] && !visited[parent[check]]){
                    q.push(parent[check]);
                    visited[parent[check]]=true;
                }
            
            }
        }
        cout<<q.size();
            vector<int>ans;
            while(!q.empty()){
                
                ans.push_back(q.front()->val);
                q.pop();

            }

        return ans;
        
    }
};