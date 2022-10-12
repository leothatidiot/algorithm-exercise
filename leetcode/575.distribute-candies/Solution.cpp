#include <vector>
#include <map>
#include <iostream>

class Solution {
public:
    int distributeCandies(std::vector<int>& candyType) {
      std::map<int, int> stat;
      for(auto item : candyType) {
        stat[item] += 1;
      }
      int n = candyType.size();
      return stat.size() > n/2 ? n/2 : stat.size();
    }
};

// 通过
// main.cpp 不改了