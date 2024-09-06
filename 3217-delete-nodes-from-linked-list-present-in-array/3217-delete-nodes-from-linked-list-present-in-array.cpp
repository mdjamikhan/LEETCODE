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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> take(nums.begin(),nums.end());
        ListNode *dummy=new ListNode(-1);
        ListNode *temp=head;
        ListNode *ans=dummy;
        while(temp ){

            if(take.find(temp->val)==take.end()){
                ListNode *r=new ListNode(temp->val);
                ans->next=r;
                temp=temp->next;
                ans=ans->next;
              

            }
            else{
                temp=temp->next;
            }
            
        }
        return dummy->next;
       
        
        
    }
};