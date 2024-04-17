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
string small;
void dfs(TreeNode *root,string &s){
    if(root==NULL) return;
    s.push_back('a'+root->val);
    if(root->left==NULL && root->right==NULL){
        reverse(s.begin(),s.end());
        if(small=="") small=s;
        else{
            small=min(small,s);
        }
        reverse(s.begin(),s.end());
    }
    dfs(root->left,s);
    dfs(root->right,s);
    s.pop_back();
}
    string smallestFromLeaf(TreeNode* root) {
        string s="";
        small="";
        if(root==NULL) return small;

        dfs(root,s);
        return small;
        
    }
};