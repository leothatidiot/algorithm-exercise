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
  ListNode* swapNodes(ListNode* head, int k) {
    ListNode *cur = head, *addr1, *addr2;
    int cnt = 1;
    for ( ; cur != nullptr; cur = cur->next) {
      if (cnt == k) { addr1 = cur; }
      cnt += 1;
    }

    int rk = cnt - k; // rk = 倒数 kth
    for (cur = head, cnt = 1; cur != nullptr ; cur = cur->next) {
      if (cnt == rk) { addr2 = cur; break; }
      cnt += 1;
    }

    swap(addr1->val, addr2->val);
    return head;
  }
};