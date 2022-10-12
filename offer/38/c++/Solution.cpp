#include <vector>
#include <string>
#include <algorithm>

using std::vector, std::string;

class Solution {
 public:
  vector<string> permutation(string s) {
    if (s == "") { return {""}; }
    char table[128];
    vector<string> res;
    for (int i = 0; i < s.size(); i++) {
      if (table[s[i]] == 1) continue; // a a b
      string l = s.substr(0, i);
      string r = s.substr(i+1, s.size());
      for (auto subRes : permutation(l+r)) {
        // auto resElem = s.substr(i,1) + subRes;
        // if (std::any_of(res.begin(), res.end(), [&resElem](const string s1) {
        //       return s1 == resElem;
        //     })) {
        //   continue;
        // }
        // res.push_back(resElem);
        res.push_back(s.substr(i,1) + subRes);
      }
      table[s[i]] = 1;
    }
    return res;
  }
};