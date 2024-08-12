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
int Count(ListNode *head)
{
    int sum=0;
    while(head)
    {
        sum++;
        head=head->next;
    }
    return sum;
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==NULL || left==right) return head;
        int m=Count(head);
        if(m==1) return head;
        int k=0;
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode *prev=dummy;
     

        for(int i=0;i<left-1;i++){
            prev=prev->next;
        }
        ListNode *current=prev->next;
        ListNode *Next=NULL;
        for(int i=left;i<right;i++)
        {
            Next=current->next;
            current->next=Next->next;
            Next->next=prev->next;
            prev->next=Next;
           
           // current=Next;
        }
       
        return dummy->next;
 
        
    }
};