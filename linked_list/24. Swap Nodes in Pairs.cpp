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
    ListNode* swapPairs(ListNode* head) {
        ListNode* dummyNode = new ListNode(0);
        dummyNode->next = head;
        ListNode* node0 = dummyNode;

        while(node0->next && node0->next->next){
            ListNode* node1 = node0->next;
            ListNode* node2 = node1->next;

            node0->next = node2;
            node1->next = node2->next;

            node2->next = node1;
            node0 = node1;

        }
        return dummyNode->next;

    }
};