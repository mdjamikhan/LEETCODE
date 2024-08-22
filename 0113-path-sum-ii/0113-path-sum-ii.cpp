/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> ans;
    void solve(TreeNode* root, int target, vector<int> store) {
        if (root == NULL)
            return;
         store.push_back(root->val);
        if ( root->left==NULL && root->right==NULL && target == root->val && store.size() != 0) {
            ans.push_back(store);
            return;
        }

        if(abs(target)>=abs(root->val)){
    
            solve(root->left, target-root->val , store);
            solve(root->right, target-root->val , store);
        }
    
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> store;
        solve(root, targetSum, store);
        return ans;
    }
};