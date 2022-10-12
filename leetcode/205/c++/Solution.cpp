class Solution {
public:
  bool isIsomorphic(string s, string t) {
    char s2tM[128] = {0};
    for (int i = 0; i < s.length(); i++) {
      if (s2tM[s[i]] == 0) {
        for (auto ct : s2tM) {
          if (ct == t[i]) return false;
        }
        s2tM[s[i]] = t[i];
      } else {
        if (s2tM[s[i]] != t[i]) return false;
      }
    }
    return true;
  }
};