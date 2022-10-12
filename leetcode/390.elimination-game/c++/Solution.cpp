class Solution {
 public:
  int lastRemaining(int n) {
    int a0 = 1, d = 1;
    bool left = true;
    while (n != 1) {
      if (left == false && n%2 == 0) {
        // a0 = a0;
      } else {
        a0 += d;
      }
      left = !left;
      d *= 2;
      n /= 2;
    }
    return a0;
  }
};