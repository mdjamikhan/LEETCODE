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
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>ans(m,vector<int>(n,-1));
        int left=0;
        int right= n-1;
        int top=0;
        int bottom=m-1 ;

        ListNode *temp=head;
        while(left<=right && top<=bottom && temp!=NULL){
            for(int i=left;i<=right&&temp!=NULL;i++)
            {
                ans[top][i]=temp->val;
                temp=temp->next;

            }
            top++;
            for(int i=top;i<=bottom && temp!=NULL;i++)
            {
                ans[i][right]=temp->val;
                temp=temp->next;
            }
            right--;
            if(bottom>=top){
                for(int i=right;i>=left && temp!=NULL;i--)
                {
                    ans[bottom][i]=temp->val;
                    temp=temp->next;
                }
                bottom--;
            }
                if(left<=right){
                    for(int i=bottom;i>=top && temp!=NULL;i--)
                    {
                       ans[i][left]=temp->val;
                        temp=temp->next;
                    }
                    left++;
                }
            

        }
        return ans;
    }
};