#include <bits/stdc++.h>

class Solution {
public:
  int maxPower(std::string s) {
    int maxCnt = 1, cnt = 1;
    for(int i = 1; i <= s.size(); i++) {
      if(s[i] == s[i-1]) {
        cnt += 1;
      } else {
        maxCnt = maxCnt < cnt ? cnt : maxCnt;
        cnt = 1;
      }
    }
    return maxCnt;
  }
};