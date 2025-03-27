//
// Created by Veritas on 3/27/25.
//
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* fast = head;
        ListNode* slow = dummy;
        for (int i = 0; i <n; i++){
            fast = fast->next;
        }
        while (fast){
            fast = fast -> next;
            slow = slow -> next;
        }
        ListNode* target = slow->next ;
        slow->next = slow->next->next;
        ListNode* ans = dummy->next;
        delete target;
        delete dummy;
        return ans;

    }
};