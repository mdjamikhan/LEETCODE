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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL) return ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>mp;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto p=q.front();
            q.pop();
            TreeNode *node=p.first;
            int x=p.second.first;
            int y=p.second.second;
            mp[y][x].insert(node->val);
            if(node->left) q.push({node->left,{x+1,y-1}});

            if(node->right) q.push({node->right,{x+1,y+1}});
        }
         for(auto it:mp){
            vector<int>ans1;
            for(auto col:it.second){
                ans1.insert(ans1.end(),col.second.begin(),col.second.end());
            }
            ans.push_back(ans1);
         }
         return ans;

    }
};