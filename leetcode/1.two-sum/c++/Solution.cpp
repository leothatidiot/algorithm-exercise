#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    if (nums.size() == 2) return {0,1};
    std::map<int, int> m;
    for (int i = 0; i < nums.size(); i++) {
      m[nums[i]] = i;
    }
    // for (auto i : m) {
    //   if (m.count(target-i.first)) {
    //     return {i.second, m[target-i.first]};
    //   }
    // }
    for (int i = 0; i < nums.size(); i++) {
      if (m.count(target-nums[i]) && m[target-nums[i]]!=i) {
        return {i, m[target-nums[i]]};
      }
    }
    return {1};
  }
};