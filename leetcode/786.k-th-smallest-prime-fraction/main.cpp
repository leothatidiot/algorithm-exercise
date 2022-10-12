#include <bits/stdc++.h>
#include "Solution.cpp"

int main() {
  Solution s1;
  std::vector<int> v1 = {1,2,3,5};
  // s1.kthSmallestPrimeFraction(v1, 3);
  for (auto item : s1.kthSmallestPrimeFraction(v1, 3)) {
    std::cout << item << ' ';
  } 
  std::cout << '\n';
}