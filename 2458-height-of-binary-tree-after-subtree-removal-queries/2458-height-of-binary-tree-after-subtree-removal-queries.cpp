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
 int height(TreeNode *root,int qt){
    if(root==NULL) return 0;
    if(root->val==qt){
        return 0;

    }


    
    return max(1+height(root->right,qt),1+height(root->left,qt));

 }
    vector<int> treeQueries(TreeNode* root, vector<int>& q) {
        vector<int>ans;


        for(int i=0;i<q.size();i++)
        {
            int k=height(root,q[i]);
            ans.push_back(k-1);
        }
        return ans;



        


        
    }
};