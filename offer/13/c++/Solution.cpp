#include <algorithm>

int SumOfDigit(int num) {
  int sum = 0;
  do {
    sum += num % 10;
    num /= 10;    
  } while (num);
  return sum;
}

class Solution {
 public:
  int movingCount(int m, int n, int k) {
    int cnt = 0;
    for (int row = 0; row < m; row++) {
      for (int col = 0; col < n; col++) {
        if (SumOfDigit(row) + SumOfDigit(col) <= k) {
          cnt += 1;
        }
      }
    }
    return cnt;
  }
};