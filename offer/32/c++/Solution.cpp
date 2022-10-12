#include <bits/stdc++.h>

using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
  vector<int> levelOrder(TreeNode* root) {
    queue<TreeNode*> nodeQ;
    vector<int> res;
    nodeQ.push(root);
    do {
      if (root == nullptr) return {};
      // if (nodeQ.front() != NULL) {
      //   cout << nodeQ.front()->val << ' ';
      //   res.push_back(nodeQ.front()->val);
      // }
      // cout << nodeQ.front()->val << ' ';
      res.push_back(nodeQ.front()->val);
      if (nodeQ.front()->left != nullptr) {
        nodeQ.push(nodeQ.front()->left);
      }
      if (nodeQ.front()->right != nullptr) {
        nodeQ.push(nodeQ.front()->right);
      }
      nodeQ.pop();
    } while (nodeQ.empty() == false);
    return res;
  }
};