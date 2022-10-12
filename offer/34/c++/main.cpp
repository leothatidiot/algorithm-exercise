#include "Solution.cpp"
#include <cstddef>
#include <vector>
#include <queue>
#define null NULL

using std::vector;
using std::deque;

TreeNode* firstNeedVal(TreeNode *root) {
  deque<TreeNode*> dq;
  dq.push_front(root);
  while (true) {
    BEGIN:
    dq.push_front(dq.front()->left);
    dq.push_front(dq.front()->right);
    dq.pop_back();
    for (auto& item : dq) {
      if (item != nullptr) {
        goto BEGIN;
      }
    }
    return dq.front();
  }
}

void initBinaryTree(TreeNode *root, vector<int> v) {
  for (int n : v) {
    firstNeedVal(root)->val = n;
  }
}

int main() {
  TreeNode *root;
  vector<int> v1 = {5,4,8,11,null,13,4,7,2,null,null,5,1};
  initBinaryTree(root, v1);
  return 0;
}