

class Solution {
public:
void dfs(TreeNode *root,int val,int depth,int current){

    if(root==NULL) return;
    if(current<depth-1){
        dfs(root->left,val,depth,current+1);
        dfs(root->right,val,depth,current+1);
    }
    if(current==depth-1){
        TreeNode *lastLeft=root->left;
        TreeNode *lastRight=root->right;
        TreeNode* newLeft=new TreeNode(val);
        TreeNode* newRight=new TreeNode(val);

        root->left=newLeft;
        newLeft->left=lastLeft;

        root->right=newRight;
        newRight->right=lastRight;

    }
}
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {


    if(depth==1){
            TreeNode *curr=root;
            TreeNode *newNode=new TreeNode(val);
            newNode->left=root;
            return newNode;
    }
        dfs(root,val,depth,1);
        return root;
        
    //     if (depth == 1) {
    //         TreeNode* newRoot = new TreeNode(val); 
    //         newRoot->left = root; 
    //         return newRoot; 
    //     }

    //    queue<TreeNode*> q;
    //     q.push(root);
    //     int currentDepth = 1;

    //     while (!q.empty()) {
    //         int size = q.size(); 

    //         if (currentDepth + 1 == depth) {
    //             for (int i = 0; i < size; ++i) {
    //                 TreeNode* node = q.front();
    //                 q.pop();

                   
    //                 TreeNode* newLeft = new TreeNode(val);
    //                 newLeft->left = node->left;
    //                 node->left = newLeft;

                    
    //                 TreeNode* newRight = new TreeNode(val);
    //                 newRight->right = node->right;
    //                 node->right = newRight;
    //             }
    //             break;
    //         } else {
                
    //             for (int i = 0; i < size; ++i) {
    //                 TreeNode* node = q.front();
    //                 q.pop();

    //                 if (node->left) q.push(node->left);
    //                 if (node->right) q.push(node->right);
    //             }
    //             currentDepth++;
    //         }
    //     }
    //     return root; 

    }
};
