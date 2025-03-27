//
// Created by Veritas on 3/26/25.
//
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=nullptr){
            fast = fast -> next;
            if (fast!=nullptr){
                fast = fast -> next;
            }
            slow = slow -> next;
            if (fast == slow){
                break;
            }
        }
        if (fast == nullptr){
            return fast;
        }

        fast = head;
        while (fast!= nullptr){
            if (fast == slow){
                break;
            }
            fast = fast->next;
            slow = slow->next;
        }
        return slow;

    }
};