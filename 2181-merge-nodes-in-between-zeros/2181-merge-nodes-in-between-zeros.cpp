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
    ListNode* mergeNodes(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        int sum=0;
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=head->next;
        ListNode *store=dummy;
        while(temp && temp->next!=NULL){
            if(temp->val!=0){
                sum+=temp->val;
                
            }
            else{
                ListNode *data=new ListNode(sum);
                store->next=data;
                store=store->next;
                sum=0;
            }
            temp=temp->next;
        }

        if(sum){
            ListNode *data=new ListNode(sum);
            store->next=data;
        }
        return dummy->next;
        
    }
};