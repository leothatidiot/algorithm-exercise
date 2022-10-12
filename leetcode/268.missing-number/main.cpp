#include "Solution.cpp"
#include <vector>
#include <iostream>

int main() {
  Solution s1;
  std::vector<int> v1 = {3,0,1};
  std::cout << s1.missingNumber(v1) << '\n';
  return 0;
}