#include <vector>
#include <iostream>

class Solution {
public:
  int trapRainWater(std::vector<std::vector<int>>& heightMap) {
    int volume = 0;
    auto isConcave = [heightMap](int i, int j) { // 是凹的
      if(heightMap[i][j-1] > heightMap[i][j] &&
         heightMap[i-1][j] > heightMap[i][j] &&
         heightMap[i][j+1] > heightMap[i][j] &&
         heightMap[i+1][j] > heightMap[i][j]
      ) return true;
      return false;
    };
    size_t m = heightMap.size(), n = heightMap[0].size();
    for(auto i=1; i<m-1; ++i) {
      for(auto j=1; j<n-1; ++j) {
        std::cout << i << ',' << j << ' ' << isConcave(i,j) << '\n';
        // while(noHigher(i,j) == false) {
        //   heightMap[i][j] += 1;
        //   volume += 1;
        // }
      }
    }
    // std::cout << volume << '\n';
    return volume;
  }
};