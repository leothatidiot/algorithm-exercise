#include <cstddef>
#include <iostream>

// Definition for a Node.
class Node {
 public:
  int val;
  Node* left;
  Node* right;

  Node() {}

  Node(int _val) {
    val = _val;
    left = NULL;
    right = NULL;
  }

  Node(int _val, Node* _left, Node* _right) {
    val = _val;
    left = _left;
    right = _right;
  }
};

class Solution {
 public:
  Node* res = new Node(-1);

  // in-order traversal
  void inOrder(Node* root) {
    if (root == nullptr) return ;
    inOrder(root->left);  // 左
    res->right = new Node(root->val); // 中
    res = res->right;
    inOrder(root->right); // 右
  }

  Node* treeToDoublyList(Node* root) {
    Node* resSave = res;
    inOrder(root);
    res = resSave->right;
    for( ; res->right != nullptr; res = res->right) {
      // std::cout << res->right->val << ' ';
      res->right->left = res;
    }
    res->right = resSave->right;
    resSave->right->left = res;
    return resSave->right;
  }
};