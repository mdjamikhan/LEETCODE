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

vector<int>ans;
void solve(TreeNode* root){
    if(root){
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }
}
    int getMinimumDifference(TreeNode* root) {
        
        solve(root);

        int diff=INT_MAX;
        for(int i=1;i<ans.size();i++)
        {
            diff=min(diff,ans[i]-ans[i-1]);
        }
        return diff;
    

    }
};