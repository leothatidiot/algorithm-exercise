#include <string>

class Solution {
public:
  std::string getHint(std::string secret, std::string guess) {
    int sCnt[10] = {0}, gCnt[10] = {0};
    int bull = 0, cow = 0;
    for(int i=0; i<std::min(secret.size(), guess.size()); i++) {
      if(secret[i] == guess[i])
        bull += 1;
      else {
        sCnt[secret[i] - '0'] += 1;
        gCnt[guess[i] - '0'] += 1;
      }
    }
    for(int i=0; i<10; i++) {
      cow += std::min(sCnt[i], gCnt[i]);
    }
    return std::to_string(bull) + "A" + std::to_string(cow) + "B";
  }
};