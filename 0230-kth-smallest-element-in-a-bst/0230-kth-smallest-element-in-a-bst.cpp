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
int target;
int p;
void  makeInorder(TreeNode *root){
    if(root==NULL) return;
    makeInorder(root->left);
    p--;
    if(p==0)
    {
        target=root->val;
        return;
    }
    makeInorder(root->right);
    
}

    int kthSmallest(TreeNode* root, int k) {
         p=k;
      
        makeInorder(root);


        return target;

        
    }
};