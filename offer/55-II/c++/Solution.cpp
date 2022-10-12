#include <algorithm>
#include <cstddef>

// Definition for a binary tree node.
struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
 public:
  int height(TreeNode *root) {
    if (root == nullptr) {
      return 0;
    }
    return std::max(height(root->left), height(root->right)) + 1;
  }
  bool isBalanced(TreeNode *root) {
    if (root == nullptr) return true;
    if (std::abs(height(root->left) - height(root->right)) <= 1 && // 左右子树高度相差 <= 1
        isBalanced(root->left) && isBalanced(root->right)) { // 左右子树都是平衡树
      return true;
    }
    return false;
  }
};