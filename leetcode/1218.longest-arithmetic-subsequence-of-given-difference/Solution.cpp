#include <vector>
#include <iostream>
#include <algorithm>
#define OFFSET 20000

class Solution {
public:
  // int longestSubsequence(std::vector<int>& arr, int difference) {
  //   std::vector<int> dList(arr.size()-1);
  //   for(auto i=0; i<arr.size()-1; ++i) {
  //     dList[i] = arr[i+1]-arr[i];
  //   }
  //   int maxSubsequenceSize = -1;
  //   for(int i=0; i<dList.size(); ++i) {
  //     int acc = 0, subsequenceSize = 1;
  //     for(int j=i; j<dList.size(); ++j) {
  //       acc += dList[j];
  //       if(acc == difference) {
  //         subsequenceSize += 1;
  //         acc = 0;
  //       }
  //     }
  //     if(subsequenceSize>maxSubsequenceSize)
  //       maxSubsequenceSize = subsequenceSize;
  //     // std::cout << dList[i] << ": " << subsequenceSize << "\n";
  //   }
  //   return maxSubsequenceSize;
  // }

  int longestSubsequence(std::vector<int>& arr, int difference) {
    int dp[40001] = {0}, ans = -1;
    for(int elem : arr) {
      dp[elem+OFFSET] = dp[elem-difference+OFFSET]+1;
      // dp[elem] = dp[elem-difference]+1;
      if(dp[elem+OFFSET] > ans) ans = dp[elem+OFFSET];
    }
    // std::cout << ans << '\n';
    return ans;
  }
};