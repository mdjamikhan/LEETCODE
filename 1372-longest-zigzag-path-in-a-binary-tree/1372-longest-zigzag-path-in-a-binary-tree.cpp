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
int maxi=0;
void dfs(TreeNode *root,int count,int right){
    if(root==NULL) {
        return ;
    }
        maxi=max(maxi,count);
    if(right){
        dfs(root->right,count+1,0);
        dfs(root->left,1,1);
    }
    else{
        dfs(root->left,count+1,1);
        dfs(root->right,1,0);
    }

}
    int longestZigZag(TreeNode* root) {
        if(root==NULL) return 0;
        int count=0;
   
            dfs(root->right,1,0);
        

            dfs(root->left,1,1);

        return maxi;
        
    }
};