#include <vector>
#include <string>

class Solution {
public:
  int translateNum(int num) {
    auto sNum = std::to_string(num);
    std::vector<int> nOfWays(sNum.size());
    nOfWays[0] = 1;
    for (int i = 1; i < sNum.size(); i++) {
      nOfWays[i] = nOfWays[i-1];
      if (sNum[i-1]=='1' || (sNum[i-1]=='2'&&sNum[i]<='5')) {
        if (i == 1) {
          nOfWays[i] = 2;
        } else {
          nOfWays[i] = nOfWays[i-2] + nOfWays[i-1];
        }
      }
    }
    return nOfWays.back();
  }
};