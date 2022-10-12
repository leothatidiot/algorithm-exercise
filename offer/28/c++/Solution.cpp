#include <cstddef>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool dual_dfs(TreeNode* l, TreeNode* r) {
  if (l == nullptr || r == nullptr) return l == r;
  return l->val == r->val && dual_dfs(l->left, r->right) &&
         dual_dfs(l->right, r->left);
}

class Solution {
 public:
  bool isSymmetric(TreeNode* root) {
    if (root == nullptr) return true;
    return dual_dfs(root->left, root->right);
  }
};