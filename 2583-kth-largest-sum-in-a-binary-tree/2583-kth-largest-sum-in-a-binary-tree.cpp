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
    long long kthLargestLevelSum(TreeNode* root, int k) {

        queue<TreeNode*>q;
        vector<long long>ans;
        q.push(root);
        while(!q.empty()){
        long long sum=0;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode *p=q.front();
                q.pop();
                sum+=p->val;
                if(p->right) q.push(p->right);
                if(p->left) q.push(p->left);
            }
            ans.push_back(sum);
        }
        if(k>ans.size()) return -1;
        sort(rbegin(ans),rend(ans));
        return ans[k-1];


        
    }
};