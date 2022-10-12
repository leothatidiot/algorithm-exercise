#include <vector>
#include <algorithm>
#include <iostream>

using std::vector;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    if (nums.empty()) return {};
    size_t left = 0, right = nums.size()-1;
    while (left < right) {
      auto s = nums[left] + nums[right];
      if (s > target)
        right -= 1;
      else if (s < target)
        left += 1;
      else
        return {nums[left], nums[right]};
    }
    return {};
  }
};