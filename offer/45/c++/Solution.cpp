#include <algorithm>
#include <string>
#include <vector>

using std::vector, std::string;

int CmpLessThan(const void *a, const void *b) {
  auto sa = std::to_string(*(int *)a);
  auto sb = std::to_string(*(int *)b);
  for (int i = 0; true; i++) {
    if (sa[i] == sb[i]) {
      if (sa[i] == '\0') return 0;
      continue;
    }
    if (sa[i] == '\0') {
      return (int)(sa[i - 1] < sb[i]) * 2 - 1;
    }
    if (sb[i] == '\0') {
      return (int)(sa[i] < sb[i - 1]) * 2 - 1;
    }
    if (sa[i] < sb[i]) {
      return 1;
    }
    if (sa[i] >= sb[i]) {
      return -1;
    }
  }
  return -1;
}

class Solution {
 public:
  string minNumber(vector<int> &nums) {
    string res = "";
    std::qsort(&nums[0], nums.size(), sizeof(int), CmpLessThan);
    std::reverse(nums.begin(), nums.end());
    for (auto num : nums) {
      res += std::to_string(num);
    }
    return res;
  }
};