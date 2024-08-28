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
    int countNodes(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            if(!root) return 0;
            int size=q.size();
           // sum+=size;
            TreeNode *ch=q.front();
            q.pop();
            if(ch->left) {
                q.push(ch->left);
                sum++;
            }
            if(ch->right){
                q.push(ch->right);
                sum++;
            }
        }
        return sum+1;
        
    }
};