#include <cstddef>
#include <vector>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* getKthFromEnd(ListNode* head, int k) {
    std::vector<ListNode*> v1;
    for ( ;head != nullptr; head = head->next) {
      v1.push_back(head);
    }
    return v1.at(v1.size()-k);
  }
};