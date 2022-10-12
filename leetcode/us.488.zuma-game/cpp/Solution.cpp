#include <string>
#include <iostream>

class Solution {
public:
  void eliminate(std::string &curList) { // 消除
    int cnt = 1; // 连续个数
    for (int i = 1 ; i < curList.size()+1; i++) {
      // cnt = (curList[i] == curList[i-1]) ? cnt+1 : 1;
      if (curList[i] == curList[i-1]) {
        cnt += 1;
      } else {
        if (cnt >= 3) {
          curList.erase(i-cnt, cnt);
          eliminate(curList);
        } else {
          cnt = 1;
        }
      }
    }
  }
  int findMinStep(std::string board, std::string hand) {
    
    return 0;
  }
};