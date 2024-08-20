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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *,long>>q;
        q.push({root,0});
        long ans=0;
        while(!q.empty()){
            int size=q.size();
            int mini=q.front().second;
            long last=0,first=0;
            for(int i=0;i<size;i++){
                TreeNode * p=q.front().first;
                long pos=q.front().second-mini;
                q.pop();

                if(i==0) first=pos;
                if(i==size-1) last=pos;

                if(p->left) q.push({p->left,pos*2+1});
                if(p->right) q.push({p->right,pos*2+2});
            }
            ans=max(ans,last-first+1);
        }
        return (int)ans;
        
    }
};