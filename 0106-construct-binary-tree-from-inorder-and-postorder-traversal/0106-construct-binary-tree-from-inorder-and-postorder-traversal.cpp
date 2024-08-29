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
TreeNode *building(int start,int end,vector<int>& postorder,int istart,int iend,vector<int>&inorder,map<int,int>&mp){
    if(start>end || istart>iend) return NULL;
    TreeNode *root=new TreeNode(postorder[end]);

    int inroot=mp[root->val];
    int left=inroot-istart;
    root->left=building(start,start+left-1,postorder,istart,inroot-1,inorder,mp);
    root->right=building(start+left,end-1,postorder,inroot+1,iend,inorder,mp);
    return root;

}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if(inorder.size()!=postorder.size()) return NULL;
        map<int,int>mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        TreeNode *root=building(0,postorder.size()-1,postorder,0,inorder.size()-1,inorder,mp);
        return root;
        
    }
};