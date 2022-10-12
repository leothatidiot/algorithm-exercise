#include "Solution.cpp"
#include <string>
#include <iostream>

int main() {
  // Solution s1;
  // std::string board1 = "RYYBBY", hand1 = "BRR";
  // s1.findMinStep(board1, hand1);
  Solution s2;
  std::string board2 = "RYYBBBY";
  s2.eliminate(board2);
  std::cout << board2 << '\n';
  return 0;
}