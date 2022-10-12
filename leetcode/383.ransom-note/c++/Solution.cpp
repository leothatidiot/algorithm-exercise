#include <bits/stdc++.h>

class Solution {
public:
  bool canConstruct(std::string ransomNote, std::string magazine) {
    std::map<char, int> rMap, mMap;
    auto init = [](std::map<char, int> &m)->void {
      for(char c = 'a'; c <= 'z'; c++) m[c] = 0;
    };
    init(rMap); init(mMap);
    for (char c : ransomNote) {
      rMap[c] += 1;
    }
    for (char c : magazine) {
      mMap[c] += 1;
    }
    for (char c = 'a'; c < 'z'; c++) {
      if (rMap[c] > mMap[c]) return false;
    }
    return true;
  }
};