#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int bSearch(vector<int> nums, size_t b, size_t e, int target) {
    if (e-b == 1 && nums[0] != target) return -1;
    int mid = (b+e) / 2;
    if (nums[mid] > target) {
      return bSearch(nums, b, mid, target);
    } else if (nums[mid] < target) {
      return bSearch(nums, mid, e, target);
    } else {
      return mid;
    }
  }
  int search(vector<int>& nums, int target) {
    if (nums.size() == 0) return 0;
    int cnt = 0;
    int pos = bSearch(nums, 0, nums.size(), target);
    if (pos == -1) {
      return 0;
    }
    cnt += 1;
    for (int i = 1; pos+i<nums.size() && nums[pos+i]==target; i++) {
      cnt += 1;
    }
    for (int i = -1; pos+i>0 && nums[pos+i]==target; i--) {
      cnt += 1;
    }
    return cnt;
  }
};