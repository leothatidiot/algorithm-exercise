#include <vector>

class Solution {
public:
  int maxSubArray(std::vector<int>& nums) {
    int maxPre = 0, maxSubSum = nums[0];
    for (const int &n : nums) {
      maxPre = std::max(n, maxPre+n);
      maxSubSum = std::max(maxPre, maxSubSum);
    }
    return maxSubSum;
  }
};