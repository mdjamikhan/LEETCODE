/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
bool check=false;
void solve(ListNode *head,TreeNode *root,unordered_map<TreeNode*, bool>&visited){
    if(root==NULL || head==NULL) return;

    if(head->val==root->val && !visited[root]){
        
        head=head->next;
    }
    if(head==NULL) {
        check=true;
    }


    visited[root]=true;
    solve(head,root->left,visited);
    solve(head,root->right,visited);


    


}
    bool isSubPath(ListNode* head, TreeNode* root) {
       unordered_map<TreeNode*, bool>visited;
        solve(head,root,visited);

        // isSubPath(head,root->left);
        // isSubPath(head,root->right);
        return check;
        
    }
};