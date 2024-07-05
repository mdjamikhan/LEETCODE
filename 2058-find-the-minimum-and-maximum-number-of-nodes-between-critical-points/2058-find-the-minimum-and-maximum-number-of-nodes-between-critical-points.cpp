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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> criticalPoints;
        if (head == nullptr || head->next == nullptr) return {-1, -1};
        
        int i = 1;
        ListNode *temp = head;
        ListNode *fast = head->next;

        while (fast && fast->next != nullptr) {
            if ((fast->val > temp->val && fast->val > fast->next->val) || 
                (fast->val < temp->val && fast->val < fast->next->val)) {
                criticalPoints.push_back(i);
            }
            temp = temp->next;
            fast = fast->next;
            i++;
        }

        if (criticalPoints.size() < 2) return {-1, -1};

        int maxDistance = criticalPoints.back() - criticalPoints[0];
        int minDistance = INT_MAX;

        for (int i = 1; i < criticalPoints.size(); i++) {
            minDistance = min(minDistance, criticalPoints[i] - criticalPoints[i - 1]);
        }

        return {minDistance, maxDistance};
    }
};
