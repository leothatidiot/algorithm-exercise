#include "Solution.cpp"
#include <iostream>

int main() {
  Solution s1;
  std::cout << s1.getHint("1807", "7810") << '\n';
  std::cout << s1.getHint("1123", "0111") << '\n';

  return 0;
}