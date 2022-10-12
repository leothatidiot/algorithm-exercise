class Solution {
public:
  int minStartValue(vector<int>& nums) {
    int sum = 0, min = INT_MAX;
    for (auto n : nums) {
      sum += n;
      if (sum < min) { min = sum; }
    }
    if (min > 0) return 1;
    else return -min + 1;
  }
};