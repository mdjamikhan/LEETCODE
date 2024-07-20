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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy=new ListNode(-1);
        ListNode *store=dummy;

        ListNode *aage=head;
        //ListNode *fast=head->next;
        while(aage!=NULL){
            bool notdup=false;

            /* if i use if condition to check dupp it will take that value use comment see comment part and check
             what is wrong in it;*/

                            /* while(fast && fast->next!=NULL){

                                if(aage->val!=fast->val){
                                    store->next=aage;
                                    store=store->next;
                                    aage=aage->next;
                                    fast=fast->next
THIS IS WRONG THINK WHY? DRY AND RUN
                                }
                                else{
                                    aage=fast;
                                    fast=fast->next;
                                    aage=aage->next;
                                    }*/
                while(aage->next!=NULL && aage->val==aage->next->val){

                    aage=aage->next;
                    notdup=true;
                }

                if(!notdup){
                    store->next=aage;
                    store=store->next;
                }
                aage=aage->next;
            }
        
        store->next=NULL;
        return dummy->next;
        
    }
};