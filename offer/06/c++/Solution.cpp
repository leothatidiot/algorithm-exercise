#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  vector<int> reversePrint(ListNode* head) {
    if (head == nullptr) return {}; // 处理 [] 的情况
    if (head->next == NULL) {
      return {head->val};
    } else {
      std::vector<int> v1 = {head->val};
      std::vector<int> v2 = reversePrint(head->next);
      v2.insert(v2.end(), v1.begin(), v1.end());
      return v2;
    }
  }
};