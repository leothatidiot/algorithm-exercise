#include "Solution.cpp"
#include <iostream>

int main() {
  for (int i = 0; i <= 10; i++) {
    for (int j = 0; j <= 9; j++) {
      std::cout << SumOfDigit(10*i+j) << ' ';
    }
    std::cout << '\n';
  }
  return 0;
}