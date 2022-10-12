#include <bits/stdc++.h>

// using namespace std;

class Solution {
public:
  int largestSumAfterKNegations(std::vector<int>& nums, int k) {
    std::sort(nums.begin(), nums.end(), [](int a, int b){return abs(a)>abs(b);});
    for (auto &n : nums) {
      if (k == 0) break;
      if (n < 0) {
        n = -n;
        k--;
      }
    }
    if (k % 2) {
      nums[nums.size()-1] = -nums[nums.size()-1];
      k = 0;
    }
    return std::accumulate(nums.begin(), nums.end(), 0);
  }
};