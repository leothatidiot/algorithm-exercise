#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  string reverseLeftWords(string s, int n) {
    auto shiftDis = n % s.length();
    std::reverse(s.begin(), s.begin()+shiftDis);
    std::reverse(s.begin()+shiftDis, s.end());
    std::reverse(s.begin(), s.end());
    return s;
  }
};