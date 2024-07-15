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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*>mp;
        unordered_set<int> childmp;
        int n=descriptions.size();

        
        for(int i=0;i<n;i++)
        {
            int parent=descriptions[i][0];
            int child=descriptions[i][1];
            int isleft=descriptions[i][2];
            if(mp.find(parent)==mp.end()){
                mp[parent]=new TreeNode(parent);
                
            }
            if(mp.find(child)==mp.end()){
                mp[child]=new TreeNode(child);
            }

            if(isleft){
                mp[parent]->left=mp[child];
            }
            else{
                mp[parent]->right=mp[child];
            }
            childmp.insert(child);
            

        }
        TreeNode* root = nullptr;
        for (auto& desc : descriptions) {
            int parentVal = desc[0];
            if (childmp.find(parentVal) == childmp.end()) {
                root = mp[parentVal];
                break;
            }
        }

        return root;
    }
       
        
    
};