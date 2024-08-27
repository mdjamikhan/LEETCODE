/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

public:
void solve(TreeNode *root,unordered_map<TreeNode*,TreeNode *>&parents){

    queue<TreeNode *>q;
    q.push(root);
    while(!q.empty()){
        TreeNode *curr=q.front();
        q.pop();
        if(curr->left){
            parents[curr->left]=curr;
            q.push(curr->left);
        }
        if(curr->right){
            parents[curr->right]=curr;
            q.push(curr->right);
        }
    }


}


    int amountOfTime(TreeNode* root, int start) {
        unordered_map<TreeNode *,TreeNode*>parents;
        solve(root,parents);

        TreeNode *target=NULL;
        queue<TreeNode *>qq;
        qq.push(root);
        while(!qq.empty()){
            TreeNode* check=qq.front();
            qq.pop();
            if(check->val==start){
                target=check;
                break;
            }
            if(check->left){
                qq.push(check->left);
            }
            if(check->right){
                qq.push(check->right);
            }
        }
        if(target==NULL)return 0;

        queue<TreeNode *>q;
        unordered_map<TreeNode*, bool>visited;
        q.push(target);
        visited[target]=true;
        int k=-1;

        while(!q.empty()){
            int size=q.size();
            k++;

            for(int i=0;i<size;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left && !visited[curr->left]){
                    visited[curr->left]=true;
                    q.push(curr->left);
                }
                if(curr->right && !visited[curr->right]){
                    visited[curr->right]=true;
                    q.push(curr->right);
                }
                if(parents[curr] && !visited[parents[curr]])
                {
                    visited[parents[curr]]=true;
                    q.push(parents[curr]);

                }
            
            }
        }
        return k;



    }
};