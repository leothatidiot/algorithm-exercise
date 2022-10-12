#include <string>
#include <vector>

class Solution {
public:
  // int lengthOfLongestSubstring(std::string s) {
  //   std::vector<std::pair<int, int>> clist(128);
  //   int cnt = 0, maxNoRepeat = 0;
  //   for (int i = 0; i < s.size(); i++) {
  //     clist[s[i]].first += 1;
  //     if (clist.at(s[i]).first == 2) {
  //       maxNoRepeat = std::max(maxNoRepeat, cnt);
  //       for (auto item : clist) item.first = 0;
  //       clist[s[i]].first = 1;
  //       cnt = i - clist[s[i]].second;
  //     } else {
  //       cnt += 1;
  //       maxNoRepeat = std::max(maxNoRepeat, cnt);
  //     }
  //     clist[s[i]].second = i;
  //   }
  //   return maxNoRepeat;
  // }

  // int lengthOfLongestSubstring(std::string s) {
  //   std::vector<std::pair<char, char*>> clist(128);
  //   long long int maxNoRepeat = 0;
  //   for (auto &ch : s) {
  //     clist[ch].first += 1;
  //     if (clist[ch].first == 2) {
  //       maxNoRepeat = std::max(maxNoRepeat, &ch - clist[ch].second);
  //       for (auto item : clist) item.first = 0;
  //       clist[ch].first = 1;
  //       clist[ch].second = &ch;
  //     } else {
  //       clist[ch].second = &ch;
  //       maxNoRepeat += 1;
  //       maxNoRepeat = std::max(maxNoRepeat, &ch - clist[ch].second);
  //     }
  //   }
  //   return maxNoRepeat;
  // }

  int lengthOfLongestSubstring(std::string s) {
    std::vector<char*> clist(128);
    char* pPrevCh = nullptr;
    long long int maxNoRepeat = 0, cnt = 0;
    for (auto &ch : s) {
      if (clist[ch] != 0) { // 这个 符号 已经存在
        if (pPrevCh == nullptr || 
            pPrevCh < clist[ch]) { // 上个符号的上一次出现 这个符号上一次出现 
          cnt = &ch-clist[ch];
          pPrevCh = clist[ch];
        } else {
          cnt += 1;
          maxNoRepeat = std::max(maxNoRepeat, cnt);
          continue;
        }
      } else {
        cnt += 1;
        maxNoRepeat = std::max(maxNoRepeat, cnt);
      }
      clist[ch] = &ch;
    }
    return maxNoRepeat;
  }
};