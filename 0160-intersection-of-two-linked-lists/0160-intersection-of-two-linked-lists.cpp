/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *temp1=headA;
        ListNode *temp2=headB;
        ListNode *value=NULL;
        if(!temp1|| !temp2) return nullptr;
        while(temp1 != temp2){ 

            temp1=temp1?temp1->next:headB;
            temp2=temp2?temp2->next:headA;
           
    
        }
        return temp2;
        
    }
};