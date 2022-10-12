#include "Solution.cpp"
#include <vector>

int main() {
  Solution s1;
  std::vector<std::vector<int>> v1 = {{1,4,3,1,3,2},{3,2,1,3,2,4},{2,3,3,2,3,1}};
  s1.trapRainWater(v1);
  return 0;
}