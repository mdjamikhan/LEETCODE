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
TreeNode *solve(TreeNode *root,int vale){
    if(root==NULL) return new TreeNode (vale);
    if(root->val>vale){
        root->left=solve(root->left,vale);
    }
    else{
        root->right=solve(root->right,vale);
    }
    return root;
}
    TreeNode* bstFromPreorder(vector<int>& pre) {
        TreeNode *root=new TreeNode(pre[0]);

        for(int i=1;i<pre.size();i++)
        {
           
            root=solve(root,pre[i]);
        }
        return root;
        
    }
};