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
int count=0;
void solve(TreeNode *root,int target,int sum){
    if(root==NULL) return;

    sum+=root->val;
    if(sum==target)count++;

    solve(root->left,target,sum);
    solve(root->right,target,sum);
}
    int pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return 0;

        solve(root,targetSum,0);
        pathSum(root->left,targetSum);
        pathSum(root->right,targetSum);
        return count;

        
    }
};