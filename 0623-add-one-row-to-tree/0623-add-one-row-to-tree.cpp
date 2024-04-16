#include <queue>

class Solution {
public:
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        if (depth == 1) {
            TreeNode* newRoot = new TreeNode(val); 
            newRoot->left = root; 
            return newRoot; 
        }

        std::queue<TreeNode*> q;
        q.push(root);
        int currentDepth = 1;

        while (!q.empty()) {
            int size = q.size(); 

            if (currentDepth + 1 == depth) {
                for (int i = 0; i < size; ++i) {
                    TreeNode* node = q.front();
                    q.pop();

                   
                    TreeNode* newLeft = new TreeNode(val);
                    newLeft->left = node->left;
                    node->left = newLeft;

                    // Insert the new value as the new right child
                    TreeNode* newRight = new TreeNode(val);
                    newRight->right = node->right;
                    node->right = newRight;
                }
                break;
            } else {
                
                for (int i = 0; i < size; ++i) {
                    TreeNode* node = q.front();
                    q.pop();

                    if (node->left) q.push(node->left);
                    if (node->right) q.push(node->right);
                }
                currentDepth++;
            }
        }
        return root; 
    }
};
