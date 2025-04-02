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
private:
    struct comp{
        bool operator()(ListNode* a, ListNode* b){
            return a->val > b->val;
        }
    };
    priority_queue<ListNode*, vector<ListNode*>, comp> q;

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head = new ListNode();
        ListNode* tail = head;
        for (auto node: lists){
            if (node) q.push(node);
        }
        while(!q.empty()){
            ListNode* node = q.top();
            q.pop();
            tail->next = node;
            tail = tail->next;
            if (node->next){
                q.push(node->next);
            }


        }
        return head->next;
    }
};