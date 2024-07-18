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
unordered_map<TreeNode *,vector<TreeNode *>>adj;
unordered_set<TreeNode *>st;
void solve(TreeNode *root, TreeNode *prev){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        st.insert(root);
    }
    if(prev!=NULL){
        adj[root].push_back(prev);
        adj[prev].push_back(root);
    }
    solve(root->left,root);
    solve(root->right,root);    
}
    int countPairs(TreeNode* root, int distance) {

        if(root==NULL) return 0;

        solve(root,NULL);

        int count=0;
        for(auto &leaf :st){
            queue<TreeNode *>que;
            unordered_set<TreeNode *>visited;
            que.push(leaf);
            visited.insert(leaf);

            for(int level=0;level<=distance;level++){

                int size=que.size();
                while(size--){
                    TreeNode *chack=que.front();
                    que.pop();

                    if(chack!=leaf && st.count(chack)){
                        count++;
                    }
                    for(auto &it:adj[chack]){
                        if(!visited.count(it))
                        que.push(it);
                        visited.insert(it);
                    }
                    
                }
            }


        }
        return count/2;

        
    }
};