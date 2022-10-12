#include "Solution.cpp"
#include <vector>
#include <string>

int main() {
  Solution s1;
  // std::vector<std::string> v1 = {"2","1","+","3","*"};
  std::vector<std::string> v1 = {"0","9","+","3","/"};
  s1.evalRPN(v1);
}