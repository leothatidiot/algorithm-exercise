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
  vector<vector<int>> levelOrder(TreeNode* root) {
    if (root == nullptr) return {};
    vector<vector<int>> res;
    vector<TreeNode*> curLevel, nextLevel;
    vector<int> curLevelVal;
    curLevel.push_back(root);
    while (curLevel.empty() == false) {
      for (auto node : curLevel) {
        curLevelVal.push_back(node->val);
        if (node->left != nullptr) nextLevel.push_back(node->left);
        if (node->right != nullptr) nextLevel.push_back(node->right);
      }
      res.push_back(curLevelVal);
      curLevel = nextLevel;
      nextLevel.clear();
      curLevelVal.clear();
    }
    return res;
  }
};

// 无调试 过