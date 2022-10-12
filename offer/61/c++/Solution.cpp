#include <vector>

using std::vector;

class Solution {
 public:
  bool isStraight(vector<int>& nums) {
    bool used[14] = {0};
    int min = 14, max = 0;
    for (int num : nums) {
      if (num == 0) {
        continue;
      }
      if (used[num] != false) {
        return false;
      }
      used[num] = true;
      min = std::min(min, num);
      max = std::max(max, num);
    }
    return max - min < 5;
  }
};