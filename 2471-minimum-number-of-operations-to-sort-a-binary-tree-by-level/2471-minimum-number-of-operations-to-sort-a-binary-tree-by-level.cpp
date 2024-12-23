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
int ischeck(vector<int>&check){
    vector<int>dummy(check.begin(),check.end());
    sort(dummy.begin(),dummy.end());
    unordered_map<int,int>mp;
    for(int i=0;i<check.size();i++){
        mp[dummy[i]]=i;
    }
    int count=0;
    for(int i=0;i<check.size();i++){
        while(i!=mp[check[i]]){
            swap(check[i],check[mp[check[i]]]);
            count++;

        }
    }
    return count;


}
    int minimumOperations(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int oper=0;
        while(!q.empty()){
            int n=q.size();
            vector<int>check;
            for(int i=0;i<n;i++){
                TreeNode*temp=q.front();
                q.pop();
                check.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            if(check.size()==1) continue;
            else{
               oper+=ischeck(check);
            }
        }
        return oper;
        
    }
};