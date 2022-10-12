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
    for (int level = 1; curLevel.empty() == false; level++) {
      for (auto item : curLevel) {
        curLevelVal.push_back(item->val);
        if (item->left != nullptr) nextLevel.push_back(item->left);
        if (item->right != nullptr) nextLevel.push_back(item->right);
      }
      if (level % 2 == 0) {
        std::reverse(curLevelVal.begin(), curLevelVal.end());
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