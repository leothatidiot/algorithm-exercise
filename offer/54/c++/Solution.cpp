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
  int res, k = 1;
  void inOrder(TreeNode* root) {
    static int cnt = 0;
    if (root == nullptr) return;
    inOrder(root->right); 
    cnt += 1;
    if (cnt == k) {
      res = root->val;
      return ;
    }
    inOrder(root->left);
  }
  int kthLargest(TreeNode *root, int k) {
    this->k = k;
    inOrder(root);
    return res;
  }
};