// #include <bits/stdc++.h>
#include <vector>

using namespace std;

class Solution {
public:
  int maxValue(vector<vector<int>>& grid) {
    for (int row = 0; row < grid.size(); row++) {
      for (int col = 0; col < grid[0].size(); col++) {
        if (row != 0 && col != 0) {
          grid[row][col] += std::max(grid[row][col-1], grid[row-1][col]);
        } else if (row == 0 && col == 0) {
          continue;
        } else if (row == 0) {
          grid[row][col] += grid[row][col-1];
        } else if (col == 0) {
          grid[row][col] += grid[row-1][col];
        }
      }
    }
    return grid.back().back();
  }
};