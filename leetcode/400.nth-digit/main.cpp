#include "Solution.cpp"
#include <iostream>
#include <bits/stdc++.h>

int main() {
  Solution s1;
  for(int i = 190; i<= 240; i++) {
    std::cout << s1.findNthDigit(i) << ' ';
  }
}