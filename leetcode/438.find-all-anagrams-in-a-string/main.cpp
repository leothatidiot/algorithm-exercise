#include "Solution.cpp"
#include <vector>
#include <string>
#include <iostream>

int main() {
  Solution so1;
  std::string s1 = "abcabc", p1 = "abc";
  so1.findAnagrams(s1, p1);
  return 0;
}