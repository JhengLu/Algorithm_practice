//
// Created by Veritas on 4/1/25.
//
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
    unordered_map<Node*, Node*> cacheNode;
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr){
            return nullptr;
        }
        if (!cacheNode.count(head)){
            Node* nodeNew = new Node(head->val);
            cacheNode[head] = nodeNew;
            nodeNew->next = copyRandomList(head->next);
            nodeNew->random = copyRandomList(head->random);

        }
        return cacheNode[head];
    }
};