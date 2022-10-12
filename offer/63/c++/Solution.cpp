#include <vector>

class Solution {
public:
  int maxProfit(std::vector<int>& prices) {
    if (prices.size() == 0) return 0;
    std::vector<int> dp(prices.size()); // 在第 n 天 可能获得的最大利润
    for (int day = 1, curMin = prices.at(0); day < prices.size(); day++) {
      curMin = std::min(curMin, prices[day]);
      // if (prices[day]-curMin)
      dp[day] = (prices[day]-curMin > dp[day-1]) ? prices[day]-curMin : dp[day-1];
    }
    return dp.back();
  }
};
