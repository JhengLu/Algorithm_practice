//
// Created by Veritas on 3/26/25.
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
    bool isPalindrome(ListNode* head) {
        vector<int>vals;
        ListNode* curr = head;
        while(curr != nullptr){
            vals.emplace_back(curr->val);
            curr = curr -> next;
        }
        for (int i = 0, j = vals.size()-1;i < vals.size(); i ++, j--){
            if (vals[i] != vals[j]){
                return false;
            }
        }
        return true;
    }
};