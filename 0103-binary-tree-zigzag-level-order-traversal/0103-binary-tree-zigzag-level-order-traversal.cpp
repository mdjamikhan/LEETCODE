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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);

        int leftright=1;
        while(!q.empty()){
            // it generally work on level order traversal
            
            int size=q.size();
            vector<int>store(size);

            for(int i=0;i<size;i++)
            {
                TreeNode *node=q.front();
                q.pop();

                int index=(leftright) ?i:(size-1-i);
                store[index]=node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            leftright=!leftright;
            ans.push_back(store);
        }
        return ans;
        
    }
};