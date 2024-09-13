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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        if(root==NULL) return 0;

        q.push(root);
        int maxi=INT_MIN;
        int level=0;
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            int sum=0;
                level++;
            for(int i=0;i<size;i++){
                TreeNode *p=q.front();
                q.pop();
                sum+=p->val;
                if(p->left)q.push(p->left);
                if(p->right)q.push(p->right);
            }
            if(maxi<sum){
                maxi=sum;
                ans=level;

            }
        }
        return ans;
        
    }
};