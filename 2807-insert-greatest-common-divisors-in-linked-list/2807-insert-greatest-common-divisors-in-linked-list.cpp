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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

       
        ListNode *slow=head;
        ListNode *fast=head->next;
        while( fast){
            int g=gcd(slow->val,fast->val);
            ListNode *p=new ListNode(g);
            slow->next=p;
            p->next=fast;
            slow=fast;
           
            fast=fast->next;
        }
        return head;
        
        
        
    }
};