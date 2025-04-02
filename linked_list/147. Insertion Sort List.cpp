//
// Created by Veritas on 4/1/25.
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
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummyHead = new ListNode(0);
        dummyHead -> next = head;
        ListNode* curr = head -> next;
        ListNode* ansHead = dummyHead;
        ListNode* sortedNode = head;
        while (curr){
            if (curr->val >= sortedNode->val){
                sortedNode = sortedNode->next;
            }
            else{
                ListNode* prev = dummyHead;
                while (prev->next->val <= curr->val){
                    prev = prev->next;
                }
                sortedNode->next = curr->next;
                curr->next = prev->next;
                prev->next = curr;

            }
            curr = sortedNode->next;
        }
        return dummyHead->next;
    }
};