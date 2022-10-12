#include "Solution.cpp"
#include <iostream>

int main() {
  Solution s1;
  // vector<int> v1 = {};
  // std::cout << s1.minNumber(v1) << '\n';
  int a, b;
  while (true) {
    std::cin >> a >> b;
    std::cout << CmpLessThan((void*)&a, (void*)&b) << "\n";
  }
  return 0;
}