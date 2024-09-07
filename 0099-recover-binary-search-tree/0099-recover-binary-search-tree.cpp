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
TreeNode *prev=NULL, *aage=NULL, *piche=NULL,*middle=NULL;
void inorder(TreeNode *root ){
    if(root==NULL) return;
    inorder(root->left);
    if(prev!=NULL &&  prev->val>root->val){
        if(aage==NULL){
            piche=prev;
            middle=root;
        }
        aage=root;
        //return;
    }
    else{
        prev=root;
        
    }
    inorder(root->right);
}
    void recoverTree(TreeNode* root) {

        inorder(root);
        if(aage && piche) swap(aage->val,piche->val);
        else if(aage && middle) swap(aage->val,middle->val);
        
    }
};