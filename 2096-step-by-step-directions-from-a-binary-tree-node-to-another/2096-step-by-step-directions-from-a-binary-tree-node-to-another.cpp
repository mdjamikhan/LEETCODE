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

bool smallpath(TreeNode *root,int target,string &ans){

    if(!root) return false;
    if(root->val==target) return true;

    ans.push_back('L');
    if(smallpath(root->left,target,ans))return true;
    ans.pop_back();

    ans.push_back('R');

    if(smallpath(root->right,target,ans)) return true;
    ans.pop_back();

    return false;

}

TreeNode *lowestCommonAnc(TreeNode *root,int p,int q){
    if(!root || root->val==p|| root->val==q) return root;

    TreeNode *left=lowestCommonAnc(root->left,p,q);
    TreeNode *right=lowestCommonAnc(root->right,p,q);

    if(left && right) return root;

    return left? left:right;
}

    string getDirections(TreeNode* root, int startValue, int destValue) {


        TreeNode *LCA=lowestCommonAnc(root,startValue,destValue);

        string ans="";


        smallpath(LCA, startValue,ans);

        for(char &it:ans) it='U';

        string ans2="";

        smallpath(LCA ,destValue,ans2);
        return ans+ans2;

        
        
        //solve(root,startValue,destValue);

        
    }
};