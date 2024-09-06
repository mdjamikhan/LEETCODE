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
void solve(TreeNode *root,vector<int>&ans){
    if(root==NULL) return;
    solve(root->left,ans);
    ans.push_back(root->val);
    solve(root->right,ans);
}
    bool findTarget(TreeNode* root, int k) {
        vector<int>ans;
        solve(root,ans);
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            if(ans[i]+ans[j]==k){
                return true;
            }
            else if(ans[i]+ans[j]<k){
                i++;
            }
            else{
                j--;
            }
        }
        return false;


        
    }
};