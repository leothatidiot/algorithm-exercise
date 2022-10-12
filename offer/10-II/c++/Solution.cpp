#include <vector>

class Solution {
public:
  int numWays(int n) {
    static std::vector<int> waysInStep = {1,1,2};
    if (n < waysInStep.size()) {
      return waysInStep.at(n);
    }
    int ways = (numWays(n-2) + numWays(n-1)) % 1000000007;
    waysInStep.push_back(ways);
    return ways;
  }
};