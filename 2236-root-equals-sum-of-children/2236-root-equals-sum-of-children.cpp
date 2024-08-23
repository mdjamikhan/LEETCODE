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
bool check=false;
int sum=0;
int solve(TreeNode *p,TreeNode *q){
    if(p==NULL && q==NULL) return 0;

    sum=p->val+q->val;

    return sum;

    

}
    bool checkTree(TreeNode* root) {
        solve(root->left,root->right);
        if(sum==root->val) return true;
        return false;
        
    }
};