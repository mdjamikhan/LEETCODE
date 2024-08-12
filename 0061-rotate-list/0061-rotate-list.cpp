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
int solve(ListNode * head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
        
    }
    return count;
}
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL) return head;
        int len=solve(head);
        int rot=k%len;
        if(rot==0) return head;


        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *move=dummy;
        ListNode *slow=dummy;
        int n=len-rot;
        ListNode *current=head;
        for(int i=1;i<n;i++)
        {
            move=move->next;

        }
        //for(int i=0;i<)
        while(move->next!=NULL){
            move=move->next;
            slow=slow->next;
        }

        ListNode *newhead=slow->next;
        slow->next=NULL;
        move->next=dummy->next;
        
       // fast->next=dummy->next;
        return newhead;
        
    }
};