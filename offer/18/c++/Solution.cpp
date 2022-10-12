

// Definition for singly-linked list.
struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
 public:
  ListNode* deleteNode(ListNode* head, int val) {
    if (head == nullptr) return nullptr; // 特殊
    if (head->val == val) {
      return head->next; // val 就是第一个元素的情况
    }
    auto originHead = head;
    auto last = head;
    head = head->next;
    while (true) {
      if (head->val == val) {
        last->next =
            (head->next != nullptr)
                ? head->next
                : nullptr;  // 如果 head 是最后一个元素， last->next = nullptr
        break;
      }
      head = head->next;
      last = last->next;
    }
    return originHead;
  }
};