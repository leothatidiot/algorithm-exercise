#include <vector>
#include <iostream>

class Solution {
public:
  int maxCount(int m, int n, std::vector<std::vector<int>>& ops) {
    int minI=40001, minJ=40001;
    for(auto item : ops) {
      if(item[0]<minI) minI = item[0];
      if(item[1]<minJ) minJ = item[1];
    }
    int res = minI*minJ;
    if(res == 1600080001) res = m*n;
    std::cout << res << '\n';
    return res;
  }
};