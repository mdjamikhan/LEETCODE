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
    vector<TreeNode *>ans;
void solve(TreeNode *root){
    if(root){



        ans.push_back(root);
        solve(root->left);
        solve(root->right);

    }
}
    void flatten(TreeNode* root) {

        if(root==NULL) return;
        solve(root);

        for(int i=1;i<ans.size();i++)
        {
            root->left=nullptr;
            root->right=ans[i];
            root=root->right;
        }

        
        
    }
};