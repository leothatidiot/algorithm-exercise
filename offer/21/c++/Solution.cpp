#include <vector>

using std::vector;

void swap(int &a, int &b) {
  a = a^b;
  b = a^b;
  a = b^a;
}

class Solution {
 public:
  vector<int> exchange(vector<int>& nums) {
    if (nums.empty() == true) return {};
    size_t left = 0, right = nums.size()-1;
    do {
      while (nums[left]%2 != 0) {
        left++;
        if (left == nums.size()) {
          goto END;
        }
      }
      while (nums[right]%2 != 1) {
        right--;
        if (right == -1) {
          goto END;
        }
      }
      if (left < right) {
        swap(nums[left], nums[right]);
      }
    } while (left < right);
    END:
    return nums;
  }
};