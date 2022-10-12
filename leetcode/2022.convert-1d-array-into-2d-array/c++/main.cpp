#include "Solution.cpp"
#include <vector>

int main() {
  Solution s1;
  std::vector<int> v1 = {1,2,3,4};  
  auto res1 = s1.construct2DArray(v1, 4, 1);
  return 0;
}