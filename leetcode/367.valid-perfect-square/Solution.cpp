class Solution {
public:
  bool isPerfectSquare(int num) {
    int k = 1;
    while((num -= k) > 0) {
      k += 2;
    }
    return !num;
  }
};

// 通过