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
int sum=0;
void solve(TreeNode *root,int x){
    if(root==NULL) return;

    if(x<=root->val){
        sum++;
        x=root->val;
    }
    solve(root->left,x);
    solve(root->right,x);




}
    int goodNodes(TreeNode* root) {
        if(!root)return 0;
        int x=root->val;
        solve(root,x);
        return sum;

        
    }
};