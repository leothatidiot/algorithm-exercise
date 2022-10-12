#include <string>

using namespace std;

class Solution {
public:
  string replaceSpace(string s) {
    for (size_t i = 0; i < s.size(); i++) {
      if (s[i] == ' ') {
        s.replace(i, 1, "%20");
      }
    }
    return s;
  }
};