#include <vector>

using namespace std;

class Solution {
 public:
  vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
    if (original.size() != m*n) return vector<vector<int>>{};
    vector<vector<int>> res(m, vector<int>(n));
    int row = 0, col = 0;
    for (int num : original) {
      if (col == n) {
        row += 1;
        col = 0;
      }
      res[row][col++] = num;
    }
    return res;
  }
};