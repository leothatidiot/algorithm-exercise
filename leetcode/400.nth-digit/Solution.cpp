#include <string>

class Solution {
public:
  int findNthDigit(int n) {
    long long k = 9, i = 1;
    while (n-k*i > 0) {
      n -= k * i;
      k *= 10, i += 1;
    }
    int num = k/9 + (n-1)/i;
    n -= i * (num - k/9);
    return std::to_string(num)[n-1] - '0';
  }
};