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
    TreeNode* replaceValueInTree(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>take;
        while(!q.empty()){
            int k=q.size();
            int sum=0;
            for(int i=0;i<k;i++)
            {
                TreeNode *p=q.front();
                q.pop();

                sum+=p->val;
                if(p->left){
                    q.push(p->left);
                }
                if(p->right){
                   
                    q.push(p->right);
                }
            }
            take.push_back(sum);
        }
        take.push_back(take.back());
        int depth=0;
        root->val=0;
        q.push(root);
        int sum=0;
        int size=0;
        while(!q.empty()){
            depth+=1;
            size=q.size();
            while(size--){
                sum=take[depth];
                TreeNode* p=q.front();
                q.pop();
                if(p->left){
                    sum-=p->left->val;
                    q.push(p->left);
                }
                if(p->right){
                    sum-=p->right->val;
                    q.push(p->right);
                }
                if(p->left) p->left->val=sum;
                if(p->right) p->right->val=sum;
            }

        }
        return root;
        
    }
};