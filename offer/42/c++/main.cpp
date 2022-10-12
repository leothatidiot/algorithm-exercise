#include "Solution.cpp"
#include <vector>

int main() {
  Solution s1;
  std::vector<int> v1 { -2, 1, -3,  4, -1,  2,  1, -5,  4};
  s1.maxSubArray(v1);
  return 0;
}