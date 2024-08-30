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
TreeNode *building(int start,int end,vector<int>&pre,int istart,int iend,vector<int>& inor,map<int,int>&mp){

    if(start>end || istart>iend) return NULL;
    TreeNode *root= new TreeNode(pre[start]);
    int newIstart=mp[root->val];
    int left=newIstart-istart;
    root->left=building(start+1,start+left,pre,istart,newIstart-1,inor,mp);
    
    root->right=building(start+left+1,end,pre,newIstart+1,iend,inor,mp);

    return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int>mp;
        int size=inorder.size();
        for(int i=0;i<size;i++)
        {
            mp[inorder[i]]=i;
        }
        TreeNode* root=building(0,preorder.size()-1,preorder,0,inorder.size()-1,inorder,mp);
        return root;

        
    }
};