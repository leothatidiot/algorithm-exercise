#include <vector>

using std::vector;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 public:
  vector<vector<int>> pathSum(TreeNode *root, int target) {
    if (root == nullptr) return {};
    if (root->left == nullptr && root->right == nullptr) {
      if (root->val == target) {
        return vector<vector<int>>{{root->val}};
      } else {
        return {};
      }
    } 
    vector<vector<int>> res = {};
    if (root->left != nullptr) {
      for (vector<int> v : pathSum(root->left, target - root->val)) {
        v.insert(v.begin(), root->val);
        res.push_back(v);
      }
    }
    if (root->right != nullptr) {
      for (vector<int> v : pathSum(root->right, target - root->val)) {
        v.insert(v.begin(), root->val);
        res.push_back(v);
      }
    }
    return res;
  }
};