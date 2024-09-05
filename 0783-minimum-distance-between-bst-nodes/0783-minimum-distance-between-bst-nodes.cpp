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
int mini=INT_MAX;
void solve(TreeNode *root,int &prev){
    if(root==NULL) return;

    solve(root->left,prev);

    if(prev!=-1){
        mini=min(mini,abs(root->val-prev));
    }
    prev=root->val;
    solve(root->right,prev);
    
}
    int minDiffInBST(TreeNode* root) {
        
         int prev=-1;
         solve(root,prev);
         return mini;
        
        
    }
};