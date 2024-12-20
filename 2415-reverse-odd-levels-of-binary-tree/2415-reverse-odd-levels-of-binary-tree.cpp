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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int level = -1;
        while (!q.empty()) {
            int size = q.size();
            vector<TreeNode*>store;
            level++;

            for (int i = 0; i < size; i++) {
                TreeNode* temp = q.front();
                q.pop();

                if(level& 1){
                    store.push_back(temp);
                }

                if (temp->left)
                    q.push(temp->left);

                if (temp->right)
                    q.push(temp->right);
    
            }
            if(level & 1){
                int n=store.size();
                for(int i=0;i<n/2;i++){
                    swap(store[i]->val,store[n-i-1]->val);
                }
            }
        }
        return root;
    }
};