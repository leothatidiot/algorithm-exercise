#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>

using std::string;

class Solution {
 public:
  string reverseWords(string s) {
    string res;
    std::istringstream iss(s);
    do {
      string subs;
      iss >> subs;
      std::reverse(subs.begin(), subs.end());
      res += subs;
      res += ' ';
    } while (iss);
    res.pop_back();
    if (res != "") {
      res.pop_back();
    }
    std::reverse(res.begin(), res.end());
    return res;
  }
};