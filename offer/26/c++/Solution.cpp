#include <cstddef>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSub(TreeNode* t1, TreeNode* t2) {
  if (t1 == nullptr) return false;
  if (t2 == nullptr) return true;
  return t1->val != t2->val && isSub(t1->left, t2->left) &&
         isSub(t1->right, t2->right);
}

class Solution {
 public:
  bool isSubStructure(TreeNode* A, TreeNode* B) {
    if (A == nullptr || B == nullptr) return false;
    return isSub(A, B) || isSubStructure(A->left, B) ||
           isSubStructure(A->right, B);
  }
};