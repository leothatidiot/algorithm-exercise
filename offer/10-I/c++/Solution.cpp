#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
  int fib(int n) {
    static vector<int> fibSeq;
    if (n < fibSeq.size()) {
      return fibSeq.at(n);
    }
    if (n == 0) {
      fibSeq.push_back(0);
      return 0;
    }
    else if (n == 1) {
      fib(0);
      fibSeq.push_back(1);
      return 1;
    }
    else {
      int val = (fib(n-2) + fib(n-1)) % 1000000007;
      fibSeq.push_back(val);
      return val;
    }
  }
};