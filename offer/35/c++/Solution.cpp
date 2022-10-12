#include <bits/stdc++.h>

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

class Solution {
public:
  Node* copyRandomList(Node* head) {
    if (head == nullptr) return nullptr;
    std::map<Node*, Node*> mp;
    for (Node* cur = head; cur != NULL; cur = cur->next) {
      mp[cur] = new Node(cur->val);
    }
    for (Node* cur = head; cur != NULL; cur = cur->next) {
      mp[cur]->next = mp[cur->next];
      mp[cur]->random = mp[cur->random];
    }
    return mp[head];
  }
};