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

int solve(TreeNode *root,int &maxi){
    if(root==NULL) return 0;

    int Left= solve(root->left,maxi);
    int Right=solve(root->right,maxi);

    int take=root->val;
    if(root->left) take+=solve(root->left->left,maxi)+solve(root->left->right,maxi);
    if(root->right)take+= solve(root->right->left,maxi)+solve(root->right->right,maxi);

    int nottake=Left+Right;

    maxi=max(maxi,max(take,nottake));
    return max(take,nottake);
    
}
    int rob(TreeNode* root) {
        int maxi=0;
        solve(root,maxi);
          return maxi;
        


        
        
    }
};