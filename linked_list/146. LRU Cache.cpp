//
// Created by Veritas on 4/16/25.
//
#include <unordered_map>

struct DLinkedNode{
    int key, value;
    DLinkedNode* prev;
    DLinkedNode* next;
    DLinkedNode(){
        key = -1;
        value = -1;
        prev = nullptr;
        next = nullptr;

    }
    DLinkedNode(int _key, int _value){
        key = _key;
        value = _value;
        prev = nullptr;
        next = nullptr;
    }
};

class LRUCache {
private:
    int capacity, size;
    unordered_map<int, DLinkedNode*> cache;
    DLinkedNode* head;
    DLinkedNode* tail;

public:
    LRUCache(int _capacity) {
        capacity = _capacity;
        size = 0;
        head = new DLinkedNode();
        tail = new DLinkedNode();
        head->next = tail;
        tail->prev = head;

    }

    int get(int key) {
        if(cache.count(key)>0){
            DLinkedNode* node = cache[key];
            moveToHead(node);
            return node->value;
        }
        else{
            return -1;
        }
    }

    void moveToHead(DLinkedNode* node){
        removeNode(node);
        addToHead(node);
    }

    void addToHead(DLinkedNode* node){
        head->next->prev = node;
        node->next = head->next;
        head->next = node;
        node->prev = head;

    }

    void removeNode(DLinkedNode* node){
        node->prev->next = node->next;
        node->next->prev = node->prev;

    }

    void put(int key, int value) {
        if (cache.count(key) == 0){
            DLinkedNode* node = new DLinkedNode(key, value);
            addToHead(node);
            cache[key] = node;
            size ++;
            if (size > capacity){

                DLinkedNode* removedNode = tail->prev;
                removeNode(removedNode);
                cache.erase(removedNode->key);
                delete removedNode;
                size--;
            }

        }
        else{
            DLinkedNode* node = cache[key];
            moveToHead(node);
            node->value = value;

        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */