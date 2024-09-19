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
int  solve(ListNode *head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n=solve(head);

        ListNode *extra=head;
        int i=0;
        ListNode * dummy=new ListNode(-1);
        dummy->next=head;
        ListNode *revData=dummy;

        while(n>=k  ){
            ListNode *startnew=revData->next;
            ListNode *curr=startnew;
            ListNode *prev=NULL;
            ListNode *Next=NULL;

            for(int i=0;i<k;i++){
                Next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=Next;     
                
            }
            revData->next=prev;
            startnew->next=curr;
            revData=startnew;
            n-=k;
           
        }
        return dummy->next;


        
    }
};