#include <bits/stdc++.h>

class Solution {
public:
  std::vector<std::string> findRelativeRanks(std::vector<int>& score) {
    int maxScore = -1;
    for (auto s : score) {
      maxScore = (s > maxScore) ? s : maxScore;
    }
    std::vector<int> rank(maxScore+1);
    fill(rank.begin(), rank.end(), 0);
    for (int i = 0; i < score.size(); i++) {
      rank[score[i]] = 1;
    }
    for (int i = maxScore, r = 1; i >= 0; i--) {
      if (rank[i] != 0) {
        rank[i] = r++;
      }
    }
    std::vector<std::string> res;
    for (auto s : score) {
      switch (rank[s]) {
      case 1:
        res.push_back("Gold Medal");
        break;
      case 2:
        res.push_back("Silver Medal");
        break;
      case 3:
        res.push_back("Bronze Medal");
        break;
      default:
        res.push_back(std::to_string(rank[s]));
      }
    }
    return res;
  }
};