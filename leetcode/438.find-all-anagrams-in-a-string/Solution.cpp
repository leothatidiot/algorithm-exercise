#include <string>
#include <vector>
#include <unordered_map>

class Solution {
public:
  std::vector<int> findAnagrams(std::string s, std::string p) {
    // int pCnt[26] = {0}, sCnt[26] = {0};
    if(s.size() < p.size()) return std::vector<int>();
    std::vector<int> pCnt(26), sCnt(26), res;
    for (char item : p) {
      pCnt[item - 'a'] += 1;
    }
    for (int i = 0; i < s.size() - p.size() + 1; i++) {
      std::fill(sCnt.begin(), sCnt.end(), 0);
      for (int j = 0; j < p.size(); j++) {
        sCnt[s[i+j] - 'a'] += 1;
      }
      if (pCnt == sCnt) {
        res.emplace_back(i);
      }
    }
    return res;
  }

  // std::vector<int> findAnagrams(std::string s, std::string p) {
  //   std::unordered_map<char, int> pMap;
  //   std::vector<int> res({});
  //   if(s.size() < p.size()) return res;
  //   for (char item : p) {
  //     pMap[item] += 1;
  //   }
  //   for (int i = 0; i < s.size() - p.size() + 1; i++) {
  //     std::unordered_map<char, int> sMap;
  //     for (int j = 0; j < p.size(); j++) {
  //       sMap[s[i+j]] += 1;
  //     }
  //     if (sMap == pMap) {
  //       res.push_back(i);
  //     }
  //   }
  //   return res;
  // }
};